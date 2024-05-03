#include "test_libft.h"

void	test_ft_lstnew(void)
{
	// Test case 1: Create a new list node with integer content
	int content0 = 42;
	t_list *node0 = ft_lstnew(&content0);
	// Verify that the content of the new node is correct
	if (*(int *)(node0->content) == content0)
		printf("PASS: Create a new list node with integer content\n");
	else
		printf("FAIL: Create a new list node with integer content\n");
	free(node0);

	// Test case 2: Create a new list node with string content
	char *content1 = "Hello, World!";
	t_list *node1 = ft_lstnew(content1);
	// Verify that the content of the new node is correct
	if (strcmp((char *)(node1->content), content1) == 0)
		printf("PASS: Create a new list node with string content\n");
	else
		printf("FAIL: Create a new list node with string content\n");
	free(node1);

	// Test case 3: Create a new list node with NULL content
	t_list *node2 = ft_lstnew(NULL);
	// Verify that the content of the new node is NULL
	if (node2->content == NULL)
		printf("PASS: Create a new list node with NULL content\n");
	else
		printf("FAIL: Create a new list node with NULL content\n");
	free(node2);
}