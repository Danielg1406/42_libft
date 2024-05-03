#include "test_libft.h"

void test_ft_atoi(void)
{
    const char *str1 = "123";
    int result1 = ft_atoi(str1);
    if (result1 == 123)
        printf("PASS: ft_atoi(\"%s\") = %d\n", str1, result1);
    else
        printf("FAIL: ft_atoi(\"%s\") = %d, expected 123\n", str1, result1);

    const char *str2 = "-456";
    int result2 = ft_atoi(str2);
    if (result2 == -456)
        printf("PASS: ft_atoi(\"%s\") = %d\n", str2, result2);
    else
        printf("FAIL: ft_atoi(\"%s\") = %d, expected -456\n", str2, result2);

    const char *str3 = "0";
    int result3 = ft_atoi(str3);
    if (result3 == 0)
        printf("PASS: ft_atoi(\"%s\") = %d\n", str3, result3);
    else
        printf("FAIL: ft_atoi(\"%s\") = %d, expected 0\n", str3, result3);

    const char *str4 = "2147483647";
    int result4 = ft_atoi(str4);
    if (result4 == 2147483647)
        printf("PASS: ft_atoi(\"%s\") = %d\n", str4, result4);
    else
        printf("FAIL: ft_atoi(\"%s\") = %d, expected 2147483647\n", str4, result4);

    const char *str5 = "-2147483648";
    int result5 = ft_atoi(str5);
    if (result5 == -2147483648)
        printf("PASS: ft_atoi(\"%s\") = %d\n", str5, result5);
    else
        printf("FAIL: ft_atoi(\"%s\") = %d, expected -2147483648\n", str5, result5);
}