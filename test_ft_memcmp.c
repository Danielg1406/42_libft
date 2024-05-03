#include "test_libft.h"

void test_ft_memcmp(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "World";
	char str4[] = "Hello World";
	char str5[] = "Hello";
	char str6[] = "Hello World";
	int result1 = ft_memcmp(str1, str2, sizeof(str1));
	int result2 = ft_memcmp(str1, str3, sizeof(str1));
	int result3 = ft_memcmp(str1, str4, sizeof(str1));
	int result4 = ft_memcmp(str5, str6, sizeof(str5));

	if (result1 == 0)
		printf("PASS: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d\n", str1, str2, str1, result1);
	else
		printf("FAIL: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d, expected 0\n", str1, str2, str1, result1);

	if (result2 < 0)
		printf("PASS: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d\n", str1, str3, str1, result2);
	else
		printf("FAIL: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d, expected less than 0\n", str1, str3, str1, result2);

	if (result3 > 0)
		printf("PASS: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d\n", str1, str4, str1, result3);
	else
		printf("FAIL: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d, expected greater than 0\n", str1, str4, str1, result3);

	if (result4 == 0)
		printf("PASS: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d\n", str5, str6, str5, result4);
	else
		printf("FAIL: ft_memcmp(\"%s\", \"%s\", sizeof(%s)) = %d, expected 0\n", str5, str6, str5, result4);
}