#include "test_libft.h"

void	test_ft_lstlast(void)
{
	t_list	*list1 = NULL;
	t_list	*list2 = ft_lstnew("Hello");
	t_list	*list3 = ft_lstnew("World");
	t_list	*list4 = ft_lstnew("!");

	t_list	*last1 = ft_lstlast(list1);
	if (last1 == NULL)
		printf("PASS: ft_lstlast(NULL) = NULL\n");
	else
		printf("FAIL: ft_lstlast(NULL) = %p, expected NULL\n", last1);

	t_list	*last2 = ft_lstlast(list2);
	if (last2 == list2)
		printf("PASS: ft_lstlast(list2) = %p\n", last2);
	else
		printf("FAIL: ft_lstlast(list2) = %p, expected %p\n", last2, list2);

	list2->next = list3;
	t_list	*last3 = ft_lstlast(list2);
	if (last3 == list3)
		printf("PASS: ft_lstlast(list2->list3) = %p\n", last3);
	else
		printf("FAIL: ft_lstlast(list2->list3) = %p, expected %p\n", last3, list3);

	list3->next = list4;
	t_list	*last4 = ft_lstlast(list2);
	if (last4 == list4)
		printf("PASS: ft_lstlast(list2->list3->list4) = %p\n", last4);
	else
		printf("FAIL: ft_lstlast(list2->list3->list4) = %p, expected %p\n", last4, list4);

	ft_lstclear(&list2, free);
}