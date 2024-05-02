#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// Test case 0: Trim leading and trailing whitespace
	char *s0 = "   Hello, World!   ";
	char *set0 = " ";
	char *trimmed0 = ft_strtrim(s0, set0);
	printf("Trimmed: \"%s\"\n", trimmed0);
	free(trimmed0);

	// Test case 1: Trim leading and trailing characters from set
	char *s1 = "###Hello, World!###";
	char *set1 = "#";
	char *trimmed1 = ft_strtrim(s1, set1);
	printf("Trimmed: \"%s\"\n", trimmed1);
	free(trimmed1);

	// Test case 2: Trim leading and trailing characters from set
	char *s2 = "123Hello, World!123";
	char *set2 = "123";
	char *trimmed2 = ft_strtrim(s2, set2);
	printf("Trimmed: \"%s\"\n", trimmed2);
	free(trimmed2);

	// Test case 3: Trim leading and trailing characters from set
	char *s3 = "Hello, World!";
	char *set3 = "Helo, Wrld!";
	char *trimmed3 = ft_strtrim(s3, set3);
	printf("Trimmed: \"%s\"\n", trimmed3);
	free(trimmed3);

	// Test case 4: Trim all characters from set
	char *s4 = "Hello, World!";
	char *set4 = "Helo, Wrld!";
	char *trimmed4 = ft_strtrim(s4, set4);
	printf("Trimmed: \"%s\"\n", trimmed4);
	free(trimmed4);

	// Test case 5: Empty string
	char *s5 = "";
	char *set5 = " ";
	char *trimmed5 = ft_strtrim(s5, set5);
	printf("Trimmed: \"%s\"\n", trimmed5);
	free(trimmed5);

	// Test case 6: Empty set
	char *s6 = "Hello, World!";
	char *set6 = "";
	char *trimmed6 = ft_strtrim(s6, set6);
	printf("Trimmed: \"%s\"\n", trimmed6);
	free(trimmed6);

	// Test case 7: Null string
	char *s7 = NULL;
	char *set7 = " ";
	char *trimmed7 = ft_strtrim(s7, set7);
	printf("Trimmed: \"%s\"\n", trimmed7);
	free(trimmed7);

	// Test case 8: Null set
	char *s8 = "Hello, World!";
	char *set8 = NULL;
	char *trimmed8 = ft_strtrim(s8, set8);
	printf("Trimmed: \"%s\"\n", trimmed8);
	free(trimmed8);
}