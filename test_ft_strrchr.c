#include "test_libft.h"

void test_ft_strrchr(void)
{
    const char *str1 = "Hello, World!";
    int c1 = 'o';
    const char *expected1 = "orld!";
    char *result1 = ft_strrchr(str1, c1);
    if (strcmp(result1, expected1) == 0)
        printf("PASS: ft_strrchr(\"%s\", '%c') = \"%s\"\n", str1, c1, result1);
    else
        printf("FAIL: ft_strrchr(\"%s\", '%c') = \"%s\", expected \"%s\"\n", str1, c1, result1, expected1);

    const char *str2 = "This is a test";
    int c2 = 'z';
    const char *expected2 = NULL;
    char *result2 = ft_strrchr(str2, c2);
    if (result2 == expected2)
        printf("PASS: ft_strrchr(\"%s\", '%c') = NULL\n", str2, c2);
    else
        printf("FAIL: ft_strrchr(\"%s\", '%c') = \"%s\", expected NULL\n", str2, c2, result2);

    const char *str3 = "Hello, World!";
    int c3 = '!';
    const char *expected3 = "!";
    char *result3 = ft_strrchr(str3, c3);
    if (strcmp(result3, expected3) == 0)
        printf("PASS: ft_strrchr(\"%s\", '%c') = \"%s\"\n", str3, c3, result3);
    else
        printf("FAIL: ft_strrchr(\"%s\", '%c') = \"%s\", expected \"%s\"\n", str3, c3, result3, expected3);
}