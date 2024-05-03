#include "test_libft.h"

void free(void *content)
{
	(void)content;
}

void	test_ft_lstdelone(void)
{
	printf("Not implemented\n");
	// t_list *list1 = ft_lstnew("Hello");
	// t_list *list2 = ft_lstnew("World");
	// t_list *list3 = ft_lstnew("!");

	// // Test case 1: Deleting a single node
	// ft_lstdelone(list1, free);
	// if (list1 == NULL)
	// 	printf("PASS: Single node deleted successfully\n");
	// else
	// 	printf("FAIL: Failed to delete single node\n");

	// // Test case 2: Deleting multiple nodes
	// list2->next = list3;
	// ft_lstdelone(list2, free);
	// if (list2 == NULL && list3 == NULL)
	// 	printf("PASS: Multiple nodes deleted successfully\n");
	// else
	// 	printf("FAIL: Failed to delete multiple nodes\n");
}
