/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:34:17 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/25 16:34:19 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// lst is the address of the first element of the list, new is the element to add to the list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
  if (!lst || !new)
    return ;
  new->next = *lst; // the next of the new element is the first element of the list
  *lst = new; // the first element of the list is the new element
}
