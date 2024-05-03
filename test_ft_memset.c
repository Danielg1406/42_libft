#include "test_libft.h"

void test_ft_memset(void)
{
	char str1[10] = "Hello";
	char str2[10] = "123456789";

	// Test case 1: Set first 3 characters of str1 to 'A'
	ft_memset(str1, 'A', 3);
	if (strcmp(str1, "AAAlo") == 0)
		printf("PASS: ft_memset(\"Hello\", 'A', 3) = %s\n", str1);
	else
		printf("FAIL: ft_memset(\"Hello\", 'A', 3) = %s , expected \"AAAlo\"\n", str1);

	// Test case 2: Set first 5 characters of str3 to 0
	ft_memset(str2, 0, 5);
	if (strcmp(str2, "\0\0\0\0\0123456789") == 0)
		printf("PASS: ft_memset(\"123456789\", 0, 5) = %s\n", str2);
	else
		printf("FAIL: ft_memset(\"123456789\", 0, 5) = %s , expected \"\\0\\0\\0\\0\\0123456789\"\n", str2);
}