#include "test_libft.h"

void	test_ft_isalnum(void)
{
	// Test alphanumeric characters
	int result = ft_isalnum('a');
	if (result == 1)
		printf("PASS: ft_isalnum('a') == %d\n", ft_isalnum('a'));
	else
		printf("FAIL: ft_isalnum('a') == %d\n, expected output: 1\n", ft_isalnum('a'));
	result = ft_isalnum('Z');
	if (result == 1)
		printf("PASS: ft_isalnum('Z') == %d\n", ft_isalnum('Z'));
	else
		printf("FAIL: ft_isalnum('Z') == %d\n, expected output: 1\n", ft_isalnum('Z'));
	result = ft_isalnum('0');
	if (result == 1)
		printf("PASS: ft_isalnum('0') == %d\n", ft_isalnum('0'));
	else
		printf("FAIL: ft_isalnum('0') == %d\n, expected output: 1\n", ft_isalnum('0'));

	// Test non-alphanumeric characters
	result = ft_isalnum(' ');
	if (result == 0)
		printf("PASS: ft_isalnum(' ') == %d\n", ft_isalnum(' '));
	else
		printf("FAIL: ft_isalnum(' ') == %d\n, expected output: 0\n", ft_isalnum(' '));
	result = ft_isalnum('$');
	if (result == 0)
		printf("PASS: ft_isalnum('$') == %d\n", ft_isalnum('$'));
	else
		printf("FAIL: ft_isalnum('$') == %d\n, expected output: 0\n", ft_isalnum('$'));
}