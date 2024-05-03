#include "test_libft.h"

void test_ft_strlcat(void)
{
	char dst1[10] = "Hello";
	const char *src1 = " World";
	size_t size1 = sizeof(dst1);
	size_t result1 = ft_strlcat(dst1, src1, size1);
	if (strcmp(dst1, "Hello Wor") == 0 && result1 == 10)
		printf("PASS: ft_strlcat(\"Hello\", \" World\", 10) = \"%s\", %zu\n", dst1, result1);
	else
		printf("FAIL: ft_strlcat(\"Hello\", \" World\", 10) = \"%s\", %zu, expected \"Hello Wor\", 10\n", dst1, result1);

	char dst2[10] = "Hello";
	const char *src2 = " World";
	size_t size2 = sizeof(dst2);
	size_t result2 = ft_strlcat(dst2, src2, size2);
	if (strcmp(dst2, "Hello Wor") == 0 && result2 == 10)
		printf("PASS: ft_strlcat(\"Hello\", \" World\", 10) = \"%s\", %zu\n", dst2, result2);
	else
		printf("FAIL: ft_strlcat(\"Hello\", \" World\", 10) = \"%s\", %zu, expected \"Hello Wor\", 10\n", dst2, result2);

	char dst3[5] = "Hello";
	const char *src3 = " World";
	size_t size3 = sizeof(dst3);
	size_t result3 = ft_strlcat(dst3, src3, size3);
	if (strcmp(dst3, "Hello") == 0 && result3 == 11)
		printf("PASS: ft_strlcat(\"Hello\", \" World\", 5) = \"%s\", %zu\n", dst3, result3);
	else
		printf("FAIL: ft_strlcat(\"Hello\", \" World\", 5) = \"%s\", %zu, expected \"Hello\", 11\n", dst3, result3);
}