#include "test_libft.h"
#include <fcntl.h>

void	test_ft_putendl_fd(void)
{
	char *str1 = "Hello, world!";
	int fd1 = 1; // stdout
	ft_putendl_fd(str1, fd1); // Output: Hello, world!

	char *str2 = "";
	int fd2 = 1; // stdout
	ft_putendl_fd(str2, fd2); // Output:

	char *str3 = "12345";
	int fd3 = 2; // stderr
	ft_putendl_fd(str3, fd3); // Output: 12345
}