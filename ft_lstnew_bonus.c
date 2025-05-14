/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:22:13 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:13:27 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//content: conteudo para o novo no, retorna o novo no

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int	main(void)
{
	char	*str;
	t_list	*node;

	str = "Alexandre Spader";
	node = ft_lstnew(str);

	if (!node)
	{
		printf("Erro criar o no\n");
		return (1);
	}
	printf("conteudo do no: %s\n", (char *)node->content);
	if (node->next == NULL)
		printf("o proximo e nulo \n");
	free (node);
	return (0);
}*/
