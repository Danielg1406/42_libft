#include "test_libft.h"

void	test_ft_lstsize(void)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	int		size;

	// Test Case 1: Empty list
	list1 = NULL;
	size = ft_lstsize(list1);
	if (size == 0)
		printf("PASS: ft_lstsize(empty list) = %d\n", size);
	else
		printf("FAIL: ft_lstsize(empty list) = %d, expected 0\n", size);
	// Test Case 2: Single node list
	list2 = malloc(sizeof(t_list));
	list2->content = "Hello";
	list2->next = NULL;
	size = ft_lstsize(list2);
	if (size == 1)
		printf("PASS: ft_lstsize(single node list) = %d\n", size);
	else
		printf("FAIL: ft_lstsize(single node list) = %d, expected 1\n", size);
	free(list2);
	// Test Case 3: Multiple node list
	list3 = malloc(sizeof(t_list));
	list3->content = "Hello";
	list3->next = malloc(sizeof(t_list));
	list3->next->content = "World";
	list3->next->next = NULL;
	size = ft_lstsize(list3);
	if (size == 2)
		printf("PASS: ft_lstsize(multiple node list) = %d\n", size);
	else
		printf("FAIL: ft_lstsize(multiple node list) = %d, expected 2\n", size);
	free(list3->next);
	free(list3);
}
