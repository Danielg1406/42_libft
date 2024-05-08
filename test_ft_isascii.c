#include "test_libft.h"

void	test_ft_isascii(void)
{
	// Test case 1: is within the ASCII range
	int result = ft_isascii('A');
	if (result == 1)
		printf("PASS: ft_isascii('A') == %d\n", ft_isascii('A'));
	else
		printf("FAIL: ft_isascii('A') == %d\n, expected output: 1\n", ft_isascii('A'));

	// Test case 2: is outside the ASCII range
	result = ft_isascii(200);
	if (result == 0)
		printf("PASS: ft_isascii(200) == %d\n", ft_isascii(200));
	else
		printf("FAIL: ft_isascii(200) == %d\n, expected output: 0\n", ft_isascii(200));

	// Test case 3: is the minimum ASCII value
	result = ft_isascii(0);
	if (result == 1)
		printf("PASS: ft_isascii(0) == %d\n", ft_isascii(0));
	else
		printf("FAIL: ft_isascii(0) == %d\n, expected output: 1\n", ft_isascii(0));

	// Test case 4: is the maximum ASCII value
	result = ft_isascii(127);
	if (result == 1)
		printf("PASS: ft_isascii(127) == %d\n", ft_isascii(127));
	else
		printf("FAIL: ft_isascii(127) == %d\n, expected output: 1\n", ft_isascii(127));
}