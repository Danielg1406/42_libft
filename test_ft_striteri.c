#include "test_libft.h"

void print_char(unsigned int index, char *c)
{
	printf("Index: %u, Char: %c\n", index, *c);
}

void test_ft_striteri(void)
{
	char str1[] = "Hello";
	printf("Before ft_striteri: %s\n", str1);
	ft_striteri(str1, print_char);
	printf("After ft_striteri: %s\n", str1);

	char str2[] = "World";
	printf("Before ft_striteri: %s\n", str2);
	ft_striteri(str2, print_char);
	printf("After ft_striteri: %s\n", str2);

	char str3[] = "12345";
	printf("Before ft_striteri: %s\n", str3);
	ft_striteri(str3, print_char);
	printf("After ft_striteri: %s\n", str3);
}