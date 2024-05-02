#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char toupper_wrapper(unsigned int index, char c)
{
    (void)index;
    return (char)ft_toupper((int)c);
}
char tolower_wrapper(unsigned int index, char c)
{
    (void)index;
    return (char)ft_tolower((int)c);
}

int main(void)
{
    // Test case 0: Mapping each character to its uppercase equivalent
    char *s0 = "hello";
    char *result0 = ft_strmapi(s0, &toupper_wrapper);
    printf("Result: \"%s\"\n", result0);
    free(result0);

    // Test case 1: Mapping each character to its lowercase equivalent
    char *s3 = "WORLD";
    char *result3 = ft_strmapi(s3, &tolower_wrapper);
    printf("Result: \"%s\"\n", result3);
    free(result3);
    return (0);
}