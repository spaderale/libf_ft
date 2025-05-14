/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:45:08 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:17:36 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lst: o endereco de um ponteiro para um no
//del: o endereco da funcao utilizada para deletar o conteudo de um no
//libera o no especificado e todos os anteriores

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
