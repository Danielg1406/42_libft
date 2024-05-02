#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Test case 0: Add a new node to an empty list
	t_list *list0 = NULL;
	int content0 = 42;
	t_list *node0 = ft_lstnew(&content0);
	ft_lstadd_back(&list0, node0);
	// Verify that the new node is added to the list
	if (list0 == node0 && list0->next == NULL)
		printf("Test case 0 passed!\n");
	else
		printf("Test case 0 failed!\n");
	free(list0);

	// Test case 1: Add a new node to a non-empty list
	t_list *list1 = ft_lstnew("Hello");
	t_list *node1 = ft_lstnew("World");
	ft_lstadd_back(&list1, node1);
	// Verify that the new node is added to the end of the list
	if (list1->next == node1 && list1->next->next == NULL)
		printf("Test case 1 passed!\n");
	else
		printf("Test case 1 failed!\n");
	free(list1);

	// Test case 2: Add a new node to a list with multiple nodes
	t_list *list2 = ft_lstnew("This");
	t_list *node2 = ft_lstnew("is");
	t_list *node3 = ft_lstnew("a");
	t_list *node4 = ft_lstnew("test");
	ft_lstadd_back(&list2, node2);
	ft_lstadd_back(&list2, node3);
	ft_lstadd_back(&list2, node4);
	// Verify that the new node is added to the end of the list
	if (list2->next->next->next->next == node4 && list2->next->next->next->next->next == NULL)
		printf("Test case 2 passed!\n");
	else
		printf("Test case 2 failed!\n");
	free(list2);
	return (0);
}