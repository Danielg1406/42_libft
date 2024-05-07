#include "test_libft.h"

void	test_ft_lstadd_back(void)
{
	// Test case 1: Add a new node to an empty list
	t_list *list0 = NULL;
	int content0 = 42;
	t_list *node0;
	node0 = ft_lstnew(&content0);
	ft_lstadd_back(&list0, node0);
	t_list *current = list0;
	while (current != NULL)
	{
		printf("%d ", *(int *)current->content);
		current = current->next;
	}
	printf("\n");
	free(list0);

	// Test case 2: Add a new node to a non-empty list
	t_list *list1;
	t_list *node1;
	list1 = ft_lstnew("Hello");
	node1 = ft_lstnew("World");
	ft_lstadd_back(&list1, node1);
	t_list *current1 = list1;
	while (current1 != NULL)
	{
		printf("%s ", (char *)current1->content);
		current1 = current1->next;
	}
	printf("\n");
	free(list1);
}