/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-a <dgomez-a@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:32:23 by dgomez-a          #+#    #+#             */
/*   Updated: 2024/04/25 19:49:02 by dgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;

	if (!s1 || !set)
		return (0);

	trim = (char *)malloc((ft_strlen(s1) - ft_strlen(set) + 1) * sizeof(char));
	if (trim == 0)
		return (0);
	ft_strlcpy(trim, (char *)s1, ft_strlen(s1) + 1)
	return (trim);
}

#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("helow", "lo"));
	return 0;
}
