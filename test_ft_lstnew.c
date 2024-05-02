#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test case 0: Create a new list node with integer content
	int content0 = 42;
	t_list *node0 = ft_lstnew(&content0);
	// Verify that the content of the new node is correct
	if (*(int *)(node0->content) == content0)
		printf("Test case 0 passed!\n");
	else
		printf("Test case 0 failed!\n");
	free(node0);

	// Test case 1: Create a new list node with string content
	char *content1 = "Hello, World!";
	t_list *node1 = ft_lstnew(content1);
	// Verify that the content of the new node is correct
	if (strcmp((char *)(node1->content), content1) == 0)
		printf("Test case 1 passed!\n");
	else
		printf("Test case 1 failed!\n");
	free(node1);

	// Test case 2: Create a new list node with NULL content
	t_list *node2 = ft_lstnew(NULL);
	// Verify that the content of the new node is NULL
	if (node2->content == NULL)
		printf("Test case 2 passed!\n");
	else
		printf("Test case 2 failed!\n");
	free(node2);
	return (0);
}