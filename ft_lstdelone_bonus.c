/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:36:27 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:16:41 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lst: o no a ser liberado
//del: o endereco da funcao utilizada para deletar o conteudo

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL && del != NULL)
	{
		del((lst)->content);
		free(lst);
	}
}
