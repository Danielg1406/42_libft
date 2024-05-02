#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Test case 0: Allocating memory for 5 integers
int		*ptr0 = ft_calloc(5, sizeof(int));
// Verify that the memory is successfully allocated
if (ptr0 != NULL)
{
	// Verify that the allocated memory is initialized to 0
	for (int i = 0; i < 5; i++)
	{
		if (ptr0[i] != 0)
		{
			printf("Test case 0 failed: Memory is not initialized to 0\n");
			break ;
		}
	}
}
else
	printf("Test case 0 failed: Memory allocation failed\n");
free(ptr0);

// Test case 1: Allocating memory for 0 elements
int		*ptr1 = ft_calloc(0, sizeof(int));
// Verify that the memory is successfully allocated
if (ptr1 != NULL)
{
	printf("Test case 1 failed: Memory allocation succeeded for 0 elements\n");
}
free(ptr1);

// Test case 2: Allocating memory for 10 characters
char	*ptr2 = ft_calloc(10, sizeof(char));
// Verify that the memory is successfully allocated
if (ptr2 != NULL)
{
	// Verify that the allocated memory is initialized to 0
	for (int i = 0; i < 10; i++)
	{
		if (ptr2[i] != '\0')
		{
			printf("Test case 2 failed: Memory is not initialized to 0\n");
			break ;
		}
	}
}
else
	printf("Test case 2 failed: Memory allocation failed\n");
free(ptr2);