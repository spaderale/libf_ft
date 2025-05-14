/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:26:57 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:15:16 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//retorna o tamanho da lista - primeiro if -> redundante

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (lst == NULL)
		return (0);
	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/*
t_list	*ft_lstnew(void *content);

int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*head;
	int	size;

	n1 = ft_lstnew("Primeiro");
	n2 = ft_lstnew("Segundo");
	n3 = ft_lstnew("Terceiro");

	n1->next = n2;
	n2->next = n3;
	head = n1;

	size = ft_lstsize(head);
	printf("Tamanho: %d\n", size);
	return (0);
}*/
