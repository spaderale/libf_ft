/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:02:28 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:16:11 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lst: endereco de um ponteiro para o primeiro link da lista
//new: o endereco de um ponteiro para o no a ser adc na lista

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/*void	print_list(t_list *lst)
{
	 while (lst)
	 {
	 	printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	 }
	 printf("NULL\n");
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = ft_lstnew("42 Porto");
	n2 = ft_lstnew("Libft");
	n3 = ft_lstnew("Bootcamp");

	ft_lstadd_front(&list, n1);
	ft_lstadd_front(&list, n2);
	ft_lstadd_front(&list, n3);

	print_list(list);
	return (0);
}*/
