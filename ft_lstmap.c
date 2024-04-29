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
// lst is the beginning of the list, f is the function to apply to each element, del is the function to delete the element
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list	*new;
  t_list	*current;

  if (!lst || !f)
    return (NULL);
  new = ft_lstnew(f(lst->content)); // create a new list with the first element of the list lst after applying the function f
  if (!new)
    return (NULL);
  current = new;
  lst = lst->next; // move to the next element of the list lst
  while (lst)
  {
    current->next = ft_lstnew(f(lst->content)); // create a new list with the current element of the list lst after applying the function f
    if (!current->next)
    {
      ft_lstclear(&new, del); // delete the new list
      return (NULL);
    }
    current = current->next;
    lst = lst->next; // move to the next element of the list lst
  }
  return (new);
}
