/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:09:45 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:15:43 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lst: o endereco de um ponteiro para o primeiro link da lista
//new: o endereco de um ponteiro para o no a ser adc na lista

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/*t_list	*ft_lstnew(void *conten);
t_list	*ft_lstlast(t_list *lst);

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*novo;

	n1 = ft_lstnew("Primeiro");
	n2 = ft_lstnew("Sgundo");
	novo = ft_lstnew("ultimo");

	head = n1;

	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, novo);
	printf("Lista final: \n");
	print_list(head);
	return (0);
}*/
