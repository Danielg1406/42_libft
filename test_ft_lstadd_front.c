#include "test_libft.h"

void	test_ft_lstadd_front(void)
{
	t_list *list = NULL;
	t_list *new1 = ft_lstnew("Node 1");
	t_list *new2 = ft_lstnew("Node 2");

	// Test case 1: adding a node to an empty list
	ft_lstadd_front(&list, new1);
	if (list == new1)
		printf("PASS: Adding a node to an empty list\n");
	else
		printf("FAIL: Adding a node to an empty list\n");

	// Test case 2: adding a node a non-empty list
	ft_lstadd_front(&list, new2);
	if (list == new2 && new2->next == new1)
		printf("PASS: Adding a node a non-empty list\n");
	else
		printf("FAIL: Adding a node a non-empty list\n");

	// Clean up
	ft_lstclear(&list, free);
}