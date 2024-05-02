#include "libft.h"
#include <stdio.h>

int	main(void)
{
	// Test case 0: Move characters from src to dest
	char src0[] = "Hello, World!";
	char dest0[20];
	ft_memmove(dest0, src0, 7);
	printf("Dest: %s\n", dest0); // Output: "Hello, "

	// Test case 1: Move characters from src to dest with overlapping memory regions
	char src1[] = "Hello, World!";
	char dest1[20];
	ft_memmove(dest1, src1 + 7, 7);
	printf("Dest: %s\n", dest1); // Output: "World!"

	// Test case 2: Move characters from src to dest with dest being before src
	char src2[] = "Hello, World!";
	char dest2[20];
	ft_memmove(dest2 + 7, src2, 7);
	printf("Dest: %s\n", dest2); // Output: " World!"

	// Test case 3: Move characters from src to dest with n = 0
	char src3[] = "Hello, World!";
	char dest3[20];
	ft_memmove(dest3, src3, 0);
	printf("Dest: %s\n", dest3); // Output: ""

	// Test case 4: Move characters from src to dest with n > length of src
	char src4[] = "Hello, World!";
	char dest4[20];
	ft_memmove(dest4, src4, 15);
	printf("Dest: %s\n", dest4); // Output: "Hello, World!"
	return (0);
}