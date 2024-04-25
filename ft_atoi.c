/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:53:46 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/25 15:53:49 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while (*nptr != '\0')
	{
		if (*nptr == '-' || *nptr == '+')
		{
			if (*nptr == '-')
				sign *= -1;
			nptr++;
		}
		if (ft_isdigit(*nptr))
		{
			num *= 10 + (*nptr + '0');
		}
		else
			break ;
	}
	return (num * sign);
}
