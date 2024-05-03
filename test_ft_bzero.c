#include "test_libft.h"

void test_ft_bzero(void)
{
    char str1[10] = "Hello";
    char str2[10] = "Test";
    char str3[10] = "12345";

    // Test 1: Zeroing the entire string
    ft_bzero(str1, sizeof(str1));
    if (strcmp(str1, "") == 0)
        printf("PASS: Zeroing the entire string\n");
    else
        printf("FAIL: Zeroing the entire string\n");

    // Test 2: Zeroing an empty string
    ft_bzero(str2, 0);
    if (strcmp(str2, "Test") == 0)
        printf("PASS: Zeroing an empty string\n");
    else
        printf("FAIL: Zeroing an empty string\n");

    // Test 3: Zeroing a string with numbers
    ft_bzero(str3, sizeof(str3));
    if (strcmp(str3, "") == 0)
        printf("PASS: Zeroing a string with numbers\n");
    else
        printf("FAIL: Zeroing a string with numbers\n");
}