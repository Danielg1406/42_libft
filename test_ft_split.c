#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	test_ft_split(void)
{
	char	*str1;
	char	**result1;
	char	*str2;
	char	**result2;
	char	*str3;
	char	**result3;
	char	*str4;
	char	**result4;

	str1 = "Hello World";
	result1 = ft_split(str1, ' ');
	if (strcmp(result1[0], "Hello") == 0 && strcmp(result1[1], "World") == 0
		&& result1[2] == NULL)
	{
		printf("PASS: ft_split(\"%s\", ' ') = [\"%s\", \"%s\"]\n", str1,
			result1[0], result1[1]);
	}
	else
	{
		printf("FAIL: ft_split(\"%s\", ' ') = [\"%s\", \"%s\"],"
				"expected [\"Hello\", \"World\"]\n",
				str1,
				result1[0],
				result1[1]);
	}
	free(result1);
	str2 = "This,is,a,test";
	result2 = ft_split(str2, ',');
	if (strcmp(result2[0], "This") == 0 && strcmp(result2[1], "is") == 0
		&& strcmp(result2[2], "a") == 0 && strcmp(result2[3], "test") == 0
		&& result2[4] == NULL)
	{
		printf("PASS: ft_split(\"%s\", ',') = [\"%s\", \"%s\", \"%s\","
				"\"%s\"]\n",
				str2,
				result2[0],
				result2[1],
				result2[2],
				result2[3]);
	}
	else
	{
		printf("FAIL: ft_split(\"%s\", ',') = [\"%s\", \"%s\", \"%s\", \"%s\"],"
				"expected [\"This\", \"is\", \"a\", \"test\"]\n",
				str2,
				result2[0],
				result2[1],
				result2[2],
				result2[3]);
	}
	free(result2);
	str3 = "One,Two,Three,Four,Five";
	result3 = ft_split(str3, ',');
	if (strcmp(result3[0], "One") == 0 && strcmp(result3[1], "Two") == 0
		&& strcmp(result3[2], "Three") == 0 && strcmp(result3[3], "Four") == 0
		&& strcmp(result3[4], "Five") == 0 && result3[5] == NULL)
	{
		printf("PASS: ft_split(\"%s\", ',') = [\"%s\", \"%s\", \"%s\", \"%s\","
				"\"%s\"]\n",
				str3,
				result3[0],
				result3[1],
				result3[2],
				result3[3],
				result3[4]);
	}
	else
	{
		printf("FAIL: ft_split(\"%s\", ',') = [\"%s\", \"%s\", \"%s\", \"%s\","
				"\"%s\"], expected [\"One\", \"Two\", \"Three\", \"Four\","
				"\"Five\"]\n",
				str3,
				result3[0],
				result3[1],
				result3[2],
				result3[3],
				result3[4]);
	}
	free(result3);
	str4 = "hello!";
	result4 = ft_split(str4, ' ');
	if (strcmp(result4[0], "hello!") == 0 && result4[1] == NULL)
	{
		printf("PASS: ft_split(\"%s\", ' ') = [\"%s\"]\n", str4, result4[0]);
	}
	else
	{
		printf("FAIL: ft_split(\"%s\", ' ') = [\"%s\"], expected [\"hello!\"]\n",
				str4, result4[0]);
	}
	free(result4);
}

int	main(void)
{
	test_ft_split();
	return (0);
}
