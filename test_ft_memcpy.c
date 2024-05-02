#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test case 0: Copying 5 integers
	int src0[] = {1, 2, 3, 4, 5};
	int dest0[5];
	ft_memcpy(dest0, src0, sizeof(src0));
	// Verify that the destination array is correctly copied from the source array
	int i;
	i = 0;
	while (i < 5)
	{
		if (dest0[i] != src0[i])
		{
			printf("Test case 0 failed: Copying integers failed\n");
			break ;
		}
		i++;
	}

	// Test case 1: Copying 0 elements
	int src1[] = {};
	int dest1[5] = {1, 2, 3, 4, 5};
	ft_memcpy(dest1, src1, sizeof(src1));
	// Verify that the destination array remains unchanged
	i = 0;
	while (i < 5)
	{
		if (dest1[i] != i + 1)
		{
			printf("Test case 1 failed: Copying 0 elements modified destination array\n");
			break ;
		}
		i++;
	}

	// Test case 2: Copying characters
	char src2[] = "Hello";
	char dest2[6];
	ft_memcpy(dest2, src2, sizeof(src2));
	// Verify that the destination array is correctly copied from the source array
	i = 0;
	while (i < 6)
	{
		if (dest2[i] != src2[i])
		{
			printf("Test case 2 failed: Copying characters failed\n");
			break ;
		}
		i++;
	}
	return (0);
}