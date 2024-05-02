#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// Test case 0: Duplicate an empty string
	const char *s0 = "";
	char *dup0 = ft_strdup(s0);
	printf("Duplicate: %s\n", dup0);
	free(dup0);

	// Test case 1: Duplicate a string with a single character
	const char *s1 = "A";
	char *dup1 = ft_strdup(s1);
	printf("Duplicate: %s\n", dup1);
	free(dup1);

	// Test case 2: Duplicate a string with multiple characters
	const char *s2 = "Hello, World!";
	char *dup2 = ft_strdup(s2);
	printf("Duplicate: %s\n", dup2);
	free(dup2);

	// Test case 3: Duplicate a string with special characters
	const char *s3 = "!@#$%^&*()";
	char *dup3 = ft_strdup(s3);
	printf("Duplicate: %s\n", dup3);
	free(dup3);
	return (0);
}