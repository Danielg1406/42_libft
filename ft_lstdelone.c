/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:35:22 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/25 16:35:24 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *)) // lst is the element to free, del is the function to delete the content of the element
{
  if (!lst || !del)
    return ;
  del(lst->content); // delete the content of the element
  free(lst); // free the element
}
