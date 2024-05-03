#include "test_libft.h"

void test_ft_memcmp(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "World";
	int result1 = ft_memcmp(str1, str2, sizeof(str1));
	int result2 = ft_memcmp(str1, str3, sizeof(str1));

	if (result1 == 0)
		printf("PASS: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d\n", str1, str2, str1, result1);
	else
		printf("FAIL: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d, expected 0\n", str1, str2, str1, result1);

	if (result2 < 0)
		printf("PASS: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d\n", str1, str3, str1, result2);
	else
		printf("FAIL: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d, expected less than 0\n", str1, str3, str1, result2);
}