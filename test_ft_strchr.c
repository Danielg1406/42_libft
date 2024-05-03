#include "test_libft.h"

void	test_ft_strchr(void)
{
	// Test case 0: Character exists in the string
	const char *s0 = "Hello, World!";
	int c0 = 'o';
	char *result0 = ft_strchr(s0, c0);
	printf("Result: %s\n", result0); // Expected output: "o, World!"

	// Test case 1: Character does not exist in the string
	const char *s1 = "Hello, World!";
	int c1 = 'z';
	char *result1 = ft_strchr(s1, c1);
	printf("Result: %s\n", result1); // Expected output: "(null)"

	// Test case 2: Character is the null terminator
	const char *s2 = "Hello, World!";
	int c2 = '\0';
	char *result2 = ft_strchr(s2, c2);
	printf("Result: %s\n", result2); // Expected output: ""

	// Test case 3: Character is the first character in the string
	const char *s3 = "Hello, World!";
	int c3 = 'H';
	char *result3 = ft_strchr(s3, c3);
	printf("Result: %s\n", result3); // Expected output: "Hello, World!"

	// Test case 4: Character is the last character in the string
	const char *s4 = "Hello, World!";
	int c4 = '!';
	char *result4 = ft_strchr(s4, c4);
	printf("Result: %s\n", result4); // Expected output: "!"
}