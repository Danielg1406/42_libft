#include "test_libft.h"

void	test_ft_strlcpy(void)
{
	char *dst = malloc(10 * sizeof(char));
	if (!dst)
		return ;
	const char *src = "Hello World";
	size_t size = 10;
	ft_strlcpy(dst, src, size);
	if (strcmp(dst, "Hello Wor") == 0)
		printf("PASS: ft_strlcpy(\"Hello World\", 10) = \"%s\"\n", dst);
	else
		printf("FAIL: ft_strlcpy(\"Hello World\", 10) = \"%s\", expected \"Hello Wor\"\n", dst);
	free(dst);
}