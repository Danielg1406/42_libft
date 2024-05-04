#include "test_libft.h"

void	test_ft_calloc(void)
{
	size_t	size;
	size_t	count;
	void	*buf1;
	void	*buf2;

	size = 7;
	count = 7;
	buf1 = ft_calloc(count, size);
	buf2 = calloc(count, size);
	if (memcmp(buf1, buf2, count * size) == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");
	free(buf1);
	free(buf2);
}