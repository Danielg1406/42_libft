#include "test_libft.h"

void	test_ft_tolower(void)
{
	// Test lowercase letters
	int result = ft_tolower('a');
	if (result == 'a')
		printf("PASS: ft_tolower('a') == %c\n", ft_tolower('a'));
	else
		printf("FAIL: ft_tolower('a') == %c, expected output : 'a'\n", ft_tolower('a'));
	result = ft_tolower('z');
	if (result == 'z')
		printf("PASS: ft_tolower('z') == %c\n", ft_tolower('z'));
	else
		printf("FAIL: ft_tolower('z') == %c, expected output : 'z'\n", ft_tolower('z'));

	// Test uppercase letters
	result = ft_tolower('A');
	if (result == 'a')
		printf("PASS: ft_tolower('A') == %c\n", ft_tolower('A'));
	else
		printf("FAIL: ft_tolower('A') == %c, expected output : 'a'\n", ft_tolower('A'));

	result = ft_tolower('Z');
	if (result == 'z')
		printf("PASS: ft_tolower('Z') == %c\n", ft_tolower('Z'));
	else
		printf("FAIL: ft_tolower('Z') == %c, expected output : 'z'\n", ft_tolower('Z'));

	// Test non-alphabetic characters
	result = ft_tolower('0');
	if (result == '0')
		printf("PASS: ft_tolower('0') == %c\n", ft_tolower('0'));
	else
		printf("FAIL: ft_tolower('0') == %c, expected output : '0'\n", ft_tolower('0'));

	result = ft_tolower('$');
	if (result == '$')
		printf("PASS: ft_tolower('$') == %c\n", ft_tolower('$'));
	else
		printf("FAIL: ft_tolower('$') == %c, expected output : '$'\n", ft_tolower('$'));
}