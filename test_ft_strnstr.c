#include "test_libft.h"

void test_ft_strnstr(void)
{
	char *str1 = "Hello, World!";
	char *substr1 = "World";
	char *result1 = ft_strnstr(str1, substr1, strlen(str1));
	if (result1 != NULL && strcmp(result1, "World!") == 0)
		printf("PASS: ft_strnstr(\"%s\", \"%s\") = \"%s\"\n", str1, substr1, result1);
	else
		printf("FAIL: ft_strnstr(\"%s\", \"%s\")\n", str1, substr1);

	char *str2 = "Hello, World!";
	char *substr2 = "hello";
	char *result2 = ft_strnstr(str2, substr2, strlen(str2));
	if (result2 == NULL)
		printf("PASS: ft_strnstr(\"%s\", \"%s\") = NULL\n", str2, substr2);
	else
		printf("FAIL: ft_strnstr(\"%s\", \"%s\")\n", str2, substr2);

	char *str3 = "Hello, World!";
	char *substr3 = "";
	char *result3 = ft_strnstr(str3, substr3, strlen(str3));
	if (result3 != NULL && strcmp(result3, str3) == 0)
		printf("PASS: ft_strnstr(\"%s\", \"%s\") = \"%s\"\n", str3, substr3, result3);
	else
		printf("FAIL: ft_strnstr(\"%s\", \"%s\")\n", str3, substr3);
}