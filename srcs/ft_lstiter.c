#include "../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = ((lst)->next);
	while (temp)
	{
		f(temp->content);
		temp = temp->next;		
	}
}

void ft_ptrupper(void *c)
{
    (int *)(c);
	if ('a' <= *c && *c <= 'z')
        *c -= 32;
}

int	main(void)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;
	t_list	**frontptr;

	list1 = ft_listnew(strdup("test1"));
	list2 = ft_listnew(strdup("test2"));
	list3 = ft_listnew(strdup("test3"));
	list4 = ft_listnew(strdup("test4"));
	frontptr = &list3;
	ft_lstadd_front(frontptr, list2);
	ft_lstadd_front(frontptr, list1);
	ft_lstadd_back(frontptr, list4);
	printf("%s\n", (char *)list1->content);
	printf("%s\n", (char *)list2->content);
	printf("%s\n", (char *)list3->content);
	printf("%s\n", (char *)list4->content);
	ft_lstiter(list1, ft_ptrupper);
	printf("%s\n", (char *)list1->content);
	printf("%s\n", (char *)list2->content);
	printf("%s\n", (char *)list3->content);
	printf("%s\n", (char *)list4->content);
}