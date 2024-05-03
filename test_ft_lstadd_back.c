#include "test_libft.h"

void	test_ft_lstadd_back(void)
{
	// Test case 1: Add a new node to an empty list
	t_list *list0 = NULL;
	int content0 = 42;
	t_list *node0;
	node0 = ft_lstnew(&content0);
	ft_lstadd_back(&list0, node0);
	// Verify that the new node is added to the list
	if (list0 == node0 && list0->next == NULL)
		printf("PASS: Add a new node to an empty list\n");
	else
		printf("FAIL: Add a new node to an empty list\n");
	free(list0);

	// Test case 2: Add a new node to a non-empty list
	t_list *list1;
	t_list *node1;
	list1 = ft_lstnew("Hello");
	node1 = ft_lstnew("World");
	ft_lstadd_back(&list1, node1);
	// Verify that the new node is added to the end of the list
	if (list1->next == node1 && list1->next->next == NULL)
		printf("PASS: Add a new node to an non-empty list\n");
	else
		printf("FAIL: Add a new node to an non-empty list\n");
	free(list1);
}