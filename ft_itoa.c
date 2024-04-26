/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:32:43 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/26 15:43:02 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_convert(int n, char *str, int len)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(str, "-2147483648", 12);
			return ;
		}
		str[0] = '-';
		n *= -1;
	}
	while (len > 0)
	{
		if (str[len - 1] != '-')
		{
			str[len - 1] = (n % 10) + '0';
			n /= 10;
		}
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		num;

	len = 0;
	num = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		len++;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	ft_convert(n, str, len);
	return (str);
}
// int main()
// {
// 	int n = 147483648;
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }