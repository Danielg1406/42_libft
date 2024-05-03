#include "test_libft.h"

void	test_ft_strlcpy(void)
{
	char	src1[] = "Hello, world!";
	char	dst1[20];
	size_t	result1;

	result1 = ft_strlcpy(dst1, src1, sizeof(dst1));
	if (strcmp(dst1, "Hello, world!") == 0 && result1 == 14)
		printf("PASS: ft_strlcpy(\"%s\", \"%s\", %lu) = \"%s\", %zu\n", dst1, src1, sizeof(dst1), dst1, result1);
	else
		printf("FAIL: ft_strlcpy(\"%s\", \"%s\", %lu) = \"%s\", %zu, expected \"%s\", %d\n", dst1, src1, sizeof(dst1), dst1, result1, "Hello, world!", 14);

	char	src2[] = "This is a test";
	char	dst2[10];
	size_t	result2;

	result2 = ft_strlcpy(dst2, src2, sizeof(dst2));
	if (strcmp(dst2, "This is a") == 0 && result2 == 12)
		printf("PASS: ft_strlcpy(\"%s\", \"%s\", %lu) = \"%s\", %zu\n", dst2, src2, sizeof(dst2), dst2, result2);
	else
		printf("FAIL: ft_strlcpy(\"%s\", \"%s\", %lu) = \"%s\", %zu, expected \"%s\", %d\n", dst2, src2, sizeof(dst2), dst2, result2, "This is a", 12);

	char	src3[] = "Short";
	char	dst3[5];
	size_t	result3;

	result3 = ft_strlcpy(dst3, src3, sizeof(dst3));
	if (strcmp(dst3, "Shor") == 0 && result3 == 5)
		printf("PASS: ft_strlcpy(\"%s\", \"%s\", %lu) = \"%s\", %zu\n", dst3, src3, sizeof(dst3), dst3, result3);
	else
		printf("FAIL: ft_strlcpy(\"%s\", \"%s\", %lu) = \"%s\", %zu, expected \"%s\", %d\n", dst3, src3, sizeof(dst3), dst3, result3, "Shor", 5);
}