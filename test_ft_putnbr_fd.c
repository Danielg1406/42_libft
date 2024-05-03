#include "test_libft.h"

void	test_ft_putnbr_fd(void)
{
	int num1 = 123;
	int num2 = -456;
	int num3 = 0;
	int num4 = -2147483648;
	int fd = 1; // stdout

	printf("Testing ft_putnbr_fd...\n");

	// Test positive number
	printf("Expected output for ft_putnbr_fd(%d, %d): %d\n", num1, fd, num1);
	ft_putnbr_fd(num1, fd);
	printf("\n");

	// Test negative number
	printf("Expected output for ft_putnbr_fd(%d, %d): %d\n", num2, fd, num2);
	ft_putnbr_fd(num2, fd);
	printf("\n");

	// Test zero
	printf("Expected output for ft_putnbr_fd(%d, %d): %d\n", num3, fd, num3);
	ft_putnbr_fd(num3, fd);
	printf("\n");

	// Test minimum integer value
	printf("Expected output for ft_putnbr_fd(%d, %d): %d\n", num4, fd, num4);
	ft_putnbr_fd(num4, fd);
	printf("\n");
}