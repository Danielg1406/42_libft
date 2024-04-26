/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:32:53 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/25 16:32:55 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char toupper_wrapper(unsigned int index, char c)
// {
//     (void)index;
//     return (char)ft_toupper((int)c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;

	if (!s || !f)
		return (0);
	len = 0;
	while (s[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	len = 0;
	while (s[len])
	{
		str[len] = f(len, s[len]);
		len++;
	}
	return (str);
}
// #include <stdio.h>
// int    main(void)
// {
//     char	*str = "Hello World!";
//     char	*new_str;

//     new_str = ft_strmapi(str, &toupper_wrapper);
//     printf("Original string: %s\n", str);
//     printf("New string: %s\n", new_str);
//     free(new_str);
//     return (0);
// }
