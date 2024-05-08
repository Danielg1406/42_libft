#include "test_libft.h"

void test_ft_strlcat(void)
{
	char dst[20] = "Hello";
	const char *src = " World!";
	size_t size = 13;
	ft_strlcat(dst, src, size);
	if (strcmp(dst, "Hello World!") == 0)
		printf("PASS: ft_strlcat(\"Hello\", \" World!\", 13) = \"%s\"\n", dst);
	else
		printf("FAIL: ft_strlcat(\"Hello\", \" World!\", 13) = \"%s\", expected \"Hello World!\"\n", dst);
}