#include "test_libft.h"

void del(void *content)
{
	(void)content; // Avoid unused parameter warning
}
void	test_ft_lstclear(void)
{
	t_list	*list = NULL;
	t_list	*node1 = ft_lstnew("Node 1");
	t_list	*node2 = ft_lstnew("Node 2");
	t_list	*node3 = ft_lstnew("Node 3");

	// Add nodes to the list
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	// Print the list before clearing
	printf("Before clearing:\n");
	t_list	*current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	// Clear the list
	ft_lstclear(&list, del);

	// Print the list after clearing
	printf("After clearing:\n");
	current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
}