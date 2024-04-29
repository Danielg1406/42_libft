/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:35:30 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/25 16:35:32 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// lst is the beginning of the list, del is the function to delete the content of an element
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
  t_list	*current;
  t_list	*next;

  if (!lst || !del)
    return ;
  current = *lst;
  while (current)
  {
    next = current->next; // save the next element of the list
    ft_lstdelone(current, del); // delete the current element of the list
    current = next; // move to the next element of the list
  }
  *lst = NULL; // set the beginning of the list to NULL
}
