#include "test_libft.h"

void	test_ft_putchar_fd(void)
{
	char c = 'A';
	int fd = 1; // stdout

	// Redirect stdout to a pipe
	int pipefd[2];
	pipe(pipefd);
	int saved_stdout = dup(STDOUT_FILENO);
	dup2(pipefd[1], STDOUT_FILENO);

	ft_putchar_fd(c, fd);

	// Read from the pipe to get the output
	char output[2];
	read(pipefd[0], output, 1);
	output[1] = '\0';

	// Restore stdout
	dup2(saved_stdout, STDOUT_FILENO);
	close(saved_stdout);

	if (output[0] == c)
		printf("PASS: ft_putchar_fd('%c', %d) = '%c'\n", c, fd, output[0]);
	else
		printf("FAIL: ft_putchar_fd('%c', %d) = '%c', expected '%c'\n", c, fd, output[0], c);
}