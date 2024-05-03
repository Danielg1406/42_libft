#include "test_libft.h"

void test_ft_strncmp(void)
{
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    int result1 = ft_strncmp(str1, str2, 5);
    int expected1 = strncmp(str1, str2, 5);
    if (result1 == expected1)
        printf("PASS: ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str1, str2, result1);
    else
        printf("FAIL: ft_strncmp(\"%s\", \"%s\", 5) = %d, expected %d\n", str1, str2, result1, expected1);

    const char *str3 = "Hello";
    const char *str4 = "World";
    int result2 = ft_strncmp(str3, str4, 3);
    int expected2 = strncmp(str3, str4, 3);
    if (result2 == expected2)
        printf("PASS: ft_strncmp(\"%s\", \"%s\", 3) = %d\n", str3, str4, result2);
    else
        printf("FAIL: ft_strncmp(\"%s\", \"%s\", 3) = %d, expected %d\n", str3, str4, result2, expected2);

    const char *str5 = "Hello";
    const char *str6 = "Hello World";
    int result3 = ft_strncmp(str5, str6, 5);
    int expected3 = strncmp(str5, str6, 5);
    if (result3 == expected3)
        printf("PASS: ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str5, str6, result3);
    else
        printf("FAIL: ft_strncmp(\"%s\", \"%s\", 5) = %d, expected %d\n", str5, str6, result3, expected3);
}
