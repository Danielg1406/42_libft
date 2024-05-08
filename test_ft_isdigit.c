#include "test_libft.h"

void	test_ft_isdigit(void)
{
	// Test cases for digits
	if (ft_isdigit('3') == 1)
		printf("PASS: ft_isdigit('3') == %d\n", ft_isdigit('3'));
	else
		printf("FAIL: ft_isdigit('3') == %d\n, expected output: 1\n",
			ft_isdigit('3'));
	if (ft_isdigit('9') == 1)
		printf("PASS: ft_isdigit('9') == %d\n", ft_isdigit('9'));
	else
		printf("FAIL: ft_isdigit('9') == %d\n, expected output: 1\n",
			ft_isdigit('9'));

	// Test cases for non-digits
	if (ft_isdigit('A') == 0)
		printf("PASS: ft_isdigit('A') == %d\n", ft_isdigit('A'));
	else
		printf("FAIL: ft_isdigit('A') == %d\n, expected output: 0\n",
			ft_isdigit('A'));
	if (ft_isdigit('.') == 0)
		printf("PASS: ft_isdigit('.') == %d\n", ft_isdigit('.'));
	else
		printf("FAIL: ft_isdigit('.') == %d\n, expected output: 0\n",
			ft_isdigit('.'));
}