#include "test_libft.h"

void test_ft_isalpha(void)
{
    // Test lowercase letters
    if (ft_isalpha('a') == 1)
        printf("PASS: ft_isalpha('a') == %d\n", ft_isalpha('a'));
    else
        printf("FAIL: ft_isalpha('a') == %d\n, expected output: 1\n", ft_isalpha('a'));
    if (ft_isalpha('z') == 1)
        printf("PASS: ft_isalpha('z') == %d\n", ft_isalpha('z'));
    else
        printf("FAIL: ft_isalpha('z') == %d\n, expected output: 1\n", ft_isalpha('z'));

    // Test uppercase letters
    if (ft_isalpha('A') == 1)
        printf("PASS: ft_isalpha('A') == %d\n", ft_isalpha('A'));
    else
        printf("FAIL: ft_isalpha('A') == %d\n, expected output: 1\n", ft_isalpha('A'));
    if (ft_isalpha('Z') == 1)
        printf("PASS: ft_isalpha('Z') == %d\n", ft_isalpha('Z'));
    else
        printf("FAIL: ft_isalpha('Z') == %d\n, expected output: 1\n", ft_isalpha('Z'));

    // Test non-alphabetic characters
    if (ft_isalpha('5') == 0)
        printf("PASS: ft_isalpha('5') == %d\n", ft_isalpha('5'));
    else
        printf("FAIL: ft_isalpha('5') == %d\n, expected output: 0\n", ft_isalpha('5'));
    if (ft_isalpha('$') == 0)
        printf("PASS: ft_isalpha('$') == %d\n", ft_isalpha('$'));
    else
        printf("FAIL: ft_isalpha('$') == %d\n, expected output: 0\n", ft_isalpha('$'));
}