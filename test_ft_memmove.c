#include "test_libft.h"

void	test_ft_memmove(void)
{
	// Test case 1: Move characters from src to dest with overlapping memory regions
	char src1[] = "Hello, World!";
	char dest1[20];
	ft_memmove(dest1, src1 + 7, 7);
	// Check if the function gives back the desired output
	if (strcmp(dest1, "World!") == 0) {
		printf("PASS: Move characters from src to dest with overlapping memory regions\n");
	} else {
		printf("FAIL: Move characters from src to dest with overlapping memory regions\n");
	}

	// Test case 2: Move characters from src to dest with n > length of src
	char src2[] = "Hello, World!";
	char dest2[20];
	ft_memmove(dest2, src2, 15);
	if (strcmp(dest2, "Hello, World!") == 0) {
		printf("PASS: Move characters from src to dest with n > length of src\n");
	} else {
		printf("FAIL: Move characters from src to dest with n > length of src\n");
	}
}