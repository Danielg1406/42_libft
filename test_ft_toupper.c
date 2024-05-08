#include "test_libft.h"

void	test_ft_toupper(void)
{
	// Test lowercase letters
	int result = ft_toupper('a');
	if (result == 'A')
		printf("PASS: ft_toupper('a') == %c\n", ft_toupper('a'));
	else
		printf("FAIL: ft_toupper('a') == %c, expected output : 'A'\n", ft_toupper('a'));
	result = ft_toupper('z');
	if (result == 'Z')
		printf("PASS: ft_toupper('z') == %c\n", ft_toupper('z'));
	else
		printf("FAIL: ft_toupper('z') == %c, expected output : 'Z'\n", ft_toupper('z'));

	// Test uppercase letters
	result = ft_toupper('A');
	if (result == 'A')
		printf("PASS: ft_toupper('A') == %c\n", ft_toupper('A'));
	else
		printf("FAIL: ft_toupper('A') == %c, expected output : 'A'\n", ft_toupper('A'));

	result = ft_toupper('Z');
	if (result == 'Z')
		printf("PASS: ft_toupper('Z') == %c\n", ft_toupper('Z'));
	else
		printf("FAIL: ft_toupper('Z') == %c, expected output : 'Z'\n", ft_toupper('Z'));

	// Test non-alphabetic characters
	result = ft_toupper('0');
	if (result == '0')
		printf("PASS: ft_toupper('0') == %c\n", ft_toupper('0'));
	else
		printf("FAIL: ft_toupper('0') == %c, expected output : '0'\n", ft_toupper('0'));

	result = ft_toupper('$');
	if (result == '$')
		printf("PASS: ft_toupper('$') == %c\n", ft_toupper('$'));
	else
		printf("FAIL: ft_toupper('$') == %c, expected output : '$'\n", ft_toupper('$'));
}