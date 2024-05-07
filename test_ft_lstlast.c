#include "test_libft.h"

void	test_ft_lstlast(void)
{
	int *a;
	int *b;
	int *c;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	c = malloc(sizeof(int));
	*a = 1;
	*b = 2;
	*c = 3;
	t_list *root = ft_lstnew(a); // Create a new list with 'a' as the first element
	ft_lstadd_back(&root, ft_lstnew(b)); // Add 'b' to the back of the list
	ft_lstadd_back(&root, ft_lstnew(c)); // Add 'c' to the back of the list
	t_list *last = ft_lstlast(root); // Get the last element of the list
	printf("Last element: %d\n", *(int *)last->content); // Should print '3'
	ft_lstclear(&root, del);
}