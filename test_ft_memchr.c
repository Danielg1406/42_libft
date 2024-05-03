#include "test_libft.h"

void	test_ft_memchr(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "This is a test";
	char	str3[] = "1234567890";
	char	str4[] = "Hello, World!";
	char	str5[] = "1234567890";
	char	*result1;
	char	*result2;
	char	*result3;
	char	*result4;
	char	*result5;

	result1 = ft_memchr(str1, 'W', strlen(str1));
	if (result1 != NULL)
		printf("PASS: ft_memchr(\"%s\", 'W', %zu) = \"%s\"\n", str1, strlen(str1), result1);
	else
		printf("FAIL: ft_memchr(\"%s\", 'W', %zu) = NULL\n", str1, strlen(str1));

	result2 = ft_memchr(str2, 't', strlen(str2));
	if (result2 != NULL)
		printf("PASS: ft_memchr(\"%s\", 't', %zu) = \"%s\"\n", str2, strlen(str2), result2);
	else
		printf("FAIL: ft_memchr(\"%s\", 't', %zu) = NULL\n", str2, strlen(str2));

	result3 = ft_memchr(str3, '5', strlen(str3));
	if (result3 != NULL)
		printf("PASS: ft_memchr(\"%s\", '5', %zu) = \"%s\"\n", str3, strlen(str3), result3);
	else
		printf("FAIL: ft_memchr(\"%s\", '5', %zu) = NULL\n", str3, strlen(str3));

	result4 = ft_memchr(str4, '!', strlen(str4));
	if (result4 != NULL)
		printf("PASS: ft_memchr(\"%s\", '!', %zu) = \"%s\"\n", str4, strlen(str4), result4);
	else
		printf("FAIL: ft_memchr(\"%s\", '!', %zu) = NULL\n", str4, strlen(str4));

	result5 = ft_memchr(str5, '0', strlen(str5));
	if (result5 != NULL)
		printf("PASS: ft_memchr(\"%s\", '0', %zu) = \"%s\"\n", str5, strlen(str5), result5);
	else
		printf("FAIL: ft_memchr(\"%s\", '0', %zu) = NULL\n", str5, strlen(str5));
}
