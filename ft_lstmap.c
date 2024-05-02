/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:35:53 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/25 16:35:55 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
	{
		del(new->content);
		return (NULL);
	}
	current = new;
	lst = lst->next;
	while (lst)
	{
		current->next = ft_lstnew(f(lst->content));
		if (!current->next)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		current = current->next;
		lst = lst->next;
	}
	return (new);
}
