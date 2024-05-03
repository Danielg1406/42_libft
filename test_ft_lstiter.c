#include "test_libft.h"

// Function to be passed as the argument to ft_lstiter
void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void test_ft_lstiter(void)
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew("World");
	t_list *node3 = ft_lstnew("!");

	// Build the linked list
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	// Call ft_lstiter to print the content of each node
	ft_lstiter(list, print_content);
}