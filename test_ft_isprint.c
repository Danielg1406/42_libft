#include "test_libft.h"

void	test_ft_isprint(void)
{
	// Test printable characters
	for (int c = 32; c <= 126; c++)
	{
		if (ft_isprint(c))
			printf("Character %c is printable\n", c);
		else
			printf("Character %c is not printable\n", c);
	}

	// Test non-printable characters
	for (int c = 0; c < 32; c++)
	{
		if (!ft_isprint(c))
			printf("Character %c is not printable\n", c);
	}
}