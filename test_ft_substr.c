#include "test_libft.h"

void	test_ft_substr(void)
{
    // Test case 0: Substring with valid start index and length
    char *s0 = "Hello, World!";
    char *sub0 = ft_substr(s0, 7, 5);
    printf("Substr: %s\n", sub0);
    free(sub0);
    
    // Test case 1: Substring with start index at the end of the string
    char *s1 = "Hello, World!";
    char *sub1 = ft_substr(s1, 13, 5);
    printf("Substr: %s\n", sub1);
    free(sub1);

    // Test case 2: Substring with start index beyond the end of the string
    char *s2 = "Hello, World!";
    char *sub2 = ft_substr(s2, 20, 5);
    printf("Substr: %s\n", sub2);
    free(sub2);

    // Test case 3: Substring with length greater than the remaining characters in the string
    char *s3 = "Hello, World!";
    char *sub3 = ft_substr(s3, 7, 100);
    printf("Substr: %s\n", sub3);
    free(sub3);
}