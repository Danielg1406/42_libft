#include "test_libft.h"

void	test_ft_strlen(void)
{
	char	*str1 = "Hello";
	size_t	len1 = ft_strlen(str1);
	if (len1 == 5)
		printf("PASS: ft_strlen(\"%s\") = %zu\n", str1, len1);
	else
		printf("FAIL: ft_strlen(\"%s\") = %zu, expected 5\n", str1, len1);

	char	*str2 = "";
	size_t	len2 = ft_strlen(str2);
	if (len2 == 0)
		printf("PASS: ft_strlen(\"%s\") = %zu\n", str2, len2);
	else
		printf("FAIL: ft_strlen(\"%s\") = %zu, expected 0\n", str2, len2);

	char	*str3 = "Lorem ipsum dolor sit amet";
	size_t	len3 = ft_strlen(str3);
	if (len3 == 26)
		printf("PASS: ft_strlen(\"%s\") = %zu\n", str3, len3);
	else
		printf("FAIL: ft_strlen(\"%s\") = %zu, expected 26\n", str3, len3);
}