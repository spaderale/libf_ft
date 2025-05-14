/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:13:11 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:13:51 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lst: O inicio da lista - retorna o ultimo no da lista

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	*a1;
	t_list	*a2;
	t_list	*a3;
	t_list	*last;

	a1 = ft_lstnew("Primeiro no");
	a2 = ft_lstnew("segundo");
	a3 = ft_lstnew("OVER");

	a1->next = a2;
	a2->next = a3;
	last = ft_lstlast(a1);
	if (last)
		printf("Ultimo conteudo: %s\n", (char *)last->content);
	free(a1);
	free(a2);
	free(a3);
	return(0);
}*/
