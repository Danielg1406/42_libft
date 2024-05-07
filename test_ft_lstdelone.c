#include "test_libft.h"


void	test_ft_lstdelone(void)
{
	t_list *lst = NULL;

	t_list *node1 = ft_lstnew(ft_strdup("ONE"));
	t_list *node2 = ft_lstnew(ft_strdup("TWO"));
	t_list *node3 = ft_lstnew(ft_strdup("THREE"));

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	// Iterate through the list and print each element
	printf("Before deletion:\n");
	for (t_list *curr = lst; curr != NULL; curr = curr->next)
		printf("%s ", (char *)curr->content);
	node1->next = node2->next; // Set the first element's next pointer to the second element
	ft_lstdelone(node2, del); // Delete the second element in the list

	// Iterate through the list again and print each element
	printf("\nAfter deletion:\n");
	for (t_list *curr = lst; curr != NULL; curr = curr->next)
		printf("%s ", (char *)curr->content);
	printf("\n");
}
