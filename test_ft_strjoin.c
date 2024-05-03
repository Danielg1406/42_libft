#include "test_libft.h"

void	test_ft_strjoin(void)
{
	char	*str1 = "Hello";
	char	*str2 = "World";
	char	*result1 = ft_strjoin(str1, str2);
	if (strcmp(result1, "HelloWorld") == 0)
		printf("PASS: ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", str1, str2, result1);
	else
		printf("FAIL: ft_strjoin(\"%s\", \"%s\") = \"%s\", expected \"HelloWorld\"\n", str1, str2, result1);
	free(result1);

	char	*str3 = "";
	char	*str4 = "Test";
	char	*result2 = ft_strjoin(str3, str4);
	if (strcmp(result2, "Test") == 0)
		printf("PASS: ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", str3, str4, result2);
	else
		printf("FAIL: ft_strjoin(\"%s\", \"%s\") = \"%s\", expected \"Test\"\n", str3, str4, result2);
	free(result2);

	char	*str5 = "Hello";
	char	*str6 = "";
	char	*result3 = ft_strjoin(str5, str6);
	if (strcmp(result3, "Hello") == 0)
		printf("PASS: ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", str5, str6, result3);
	else
		printf("FAIL: ft_strjoin(\"%s\", \"%s\") = \"%s\", expected \"Hello\"\n", str5, str6, result3);
	free(result3);

	char	*str7 = "";
	char	*str8 = "";
	char	*result4 = ft_strjoin(str7, str8);
	if (strcmp(result4, "") == 0)
		printf("PASS: ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", str7, str8, result4);
	else
		printf("FAIL: ft_strjoin(\"%s\", \"%s\") = \"%s\", expected \"\"\n", str7, str8, result4);
	free(result4);
}