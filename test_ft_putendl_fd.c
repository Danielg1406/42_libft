#include "test_libft.h"

void	test_ft_putendl_fd(void)
{
	char *str1 = "Hello, World!";
	char *str2 = "This is a test";
	char *str3 = "";
	char *str4 = "12345";

	// Redirect stdout to a file
	freopen("output.txt", "w", stdout);

	// Test ft_putendl_fd with different strings
	ft_putendl_fd(str1, STDOUT_FILENO);
	ft_putendl_fd(str2, STDOUT_FILENO);
	ft_putendl_fd(str3, STDOUT_FILENO);
	ft_putendl_fd(str4, STDOUT_FILENO);

	// Close the file
	fclose(stdout);

	// Read the contents of the file
	FILE *file = fopen("output.txt", "r");
	if (file) {
		char line[100];
		int lineNumber = 1;
		while (fgets(line, sizeof(line), file)) {
			// Remove newline character
			line[strcspn(line, "\n")] = 0;

			// Check if the output matches the expected result
			switch (lineNumber) {
				case 1:
					if (strcmp(line, str1) != 0) {
						printf("FAIL: ft_putendl_fd(\"%s\", STDOUT_FILENO) - Expected: \"%s\", Actual: \"%s\"\n", str1, str1, line);
					} else {
						printf("PASS: ft_putendl_fd(\"%s\", STDOUT_FILENO)\n", str1);
					}
					break;
				case 2:
					if (strcmp(line, str2) != 0) {
						printf("FAIL: ft_putendl_fd(\"%s\", STDOUT_FILENO) - Expected: \"%s\", Actual: \"%s\"\n", str2, str2, line);
					} else {
						printf("PASS: ft_putendl_fd(\"%s\", STDOUT_FILENO)\n", str2);
					}
					break;
				case 3:
					if (strcmp(line, str3) != 0) {
						printf("FAIL: ft_putendl_fd(\"%s\", STDOUT_FILENO) - Expected: \"%s\", Actual: \"%s\"\n", str3, str3, line);
					} else {
						printf("PASS: ft_putendl_fd(\"%s\", STDOUT_FILENO)\n", str3);
					}
					break;
				case 4:
					if (strcmp(line, str4) != 0) {
						printf("FAIL: ft_putendl_fd(\"%s\", STDOUT_FILENO) - Expected: \"%s\", Actual: \"%s\"\n", str4, str4, line);
					} else {
						printf("PASS: ft_putendl_fd(\"%s\", STDOUT_FILENO)\n", str4);
					}
					break;
				default:
					break;
			}

			lineNumber++;
		}

		fclose(file);
	}

	// Remove the temporary file
	remove("output.txt");
}