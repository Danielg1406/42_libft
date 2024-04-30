#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to test
char	*ft_itoa(int n);

// Test function
void test_ft_itoa(int n, char *expected_result) {
    char *result = ft_itoa(n);
    if (strcmp(result, expected_result) == 0) {
        printf("PASS: ft_itoa(%d) = \"%s\"\n", n, result);
    } else {
        printf("FAIL: ft_itoa(%d) = \"%s\", expected \"%s\"\n", n, result, expected_result);
    }
    free(result);
}

int main() {
    // Test cases
    test_ft_itoa(0, "0");
    test_ft_itoa(123, "123");
    test_ft_itoa(-456, "-456");
    test_ft_itoa(2147483647, "2147483647");
    test_ft_itoa(-2147483648, "-2147483648");

    return 0;
}