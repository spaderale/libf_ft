/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:42:52 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:14:10 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//itera a lista 'lst' e aplica a funcao 'f' no conteudo de cada no. Cria uma 
//nova lista resultante de sucessivas aplicacoes da funcao f.
//funcao del e utilizada para deletar o conteudo de um no, caso necess.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*void	*increment(void *n)
{
	int	*res;

	res = malloc(sizeof(int));
	if (!res)
		return (NULL);
	*res = *(int *)n + 1;
	return (res);
}

void	del(void *n)
{
	free(n);
}

int	main(void)
{
	int a = 42;
	t_list	*lst;
	t_list	*new_list;

	lst = ft_lstnew(&a);
	new_list = ft_lstmap(lst, increment, del);
	printf("Original: %d\n", *(int *)(lst->content));
	printf("Novo: %d\n", *(int *)(new_list->content));
	ft_lstclear(&new_list, del);
	return (0);
}*/
