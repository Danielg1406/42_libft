/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:35:44 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/25 16:35:46 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *)) // lst is the beginning of the list, f is the function to apply to each element
{
  t_list	*current;

  if (!lst || !f)
    return ;
  current = lst;
  while (current)
  {
    f(current->content); // apply the function f to the current element of the list
    current = current->next; // move to the next element of the list
  }
}
