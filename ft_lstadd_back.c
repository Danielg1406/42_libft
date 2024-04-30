/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:34:58 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/25 16:35:14 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlastadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!new)
		return (NULL);
	if (!*lst)
	{
		*lst = new;
		return (*lst);
	}
	last = ft_lstlast(*lst);
	last->next = new;
	return (last->next);
}