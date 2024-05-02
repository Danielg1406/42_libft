#include <stdio.h>
#include "libft.h"

// Function to apply to each element in the list
void *add_one(void *num)
{
    int *n = (int *)num;
    int *result = malloc(sizeof(int));
    *result = *n + 1;
    return result;
}

// Function to free each element in the list
void free_num(void *num)
{
    free(num);
}

// Test function
void test_ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *result = ft_lstmap(lst, f, del);
    if (result)
    {
        printf("Result: ");
        while (result)
        {
            printf("%d ", *(int *)(result->content));
            result = result->next;
        }
        printf("\n");
    }
    else
    {
        printf("Result is NULL\n");
    }
}

int main()
{
    // Create a list with some numbers
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->content) = 1;
    lst->next = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->next->content) = 2;
    lst->next->next = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->next->next->content) = 3;

    // Test cases
    test_ft_lstmap(lst, add_one, free_num);

    // Free the list
    ft_lstclear(&lst, free_num);

    return 0;
}