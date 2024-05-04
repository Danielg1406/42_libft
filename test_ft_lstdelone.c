#include "test_libft.h"

void	test_ft_lstdelone(void)
{
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));

	*a = 1;
	*b = 2;
	*c = 3;

	// Create a new list with 'a' as the first element
	t_list *root = ft_lstnew(a);
	ft_lstadd_back(&root, ft_lstnew(b)); // Add 'b' to the back of the list
	ft_lstadd_back(&root, ft_lstnew(c)); // Add 'c' to the back of the list

	// Iterate through the list and print each element
	printf("Before deletion\n");
	for (t_list *curr = root; curr != NULL; curr = curr->next)
		printf("%d\n", *(int *)curr->content);
	ft_lstdelone(root->next, del); // Delete the second element in the list

	// Iterate through the list again and print each element
	printf("After deletion\n");
	for (t_list *curr = root; curr != NULL; curr = curr->next)
		printf("%d\n", *(int *)curr->content);
}
