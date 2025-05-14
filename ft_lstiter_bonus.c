/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:32:29 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:18:19 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lst: o endereco de um ponteiro para um no
//f: o endereco da funcao usada para iterar a lista
//itera a lista lst e aplica a funcao f no conteudo de cada no

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		next = current->next;
		f(current->content);
		current = next;
	}
}
