/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:47:49 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:10:03 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_size;
	size_t	start;
	size_t	end;
	char	*newstr;

	if (!s1 || !set)
		return (NULL);
	s1_size = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = s1_size;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	newstr = ft_substr(s1, start, (end - start));
	if (!newstr)
		return (NULL);
	return (newstr);
}

//remove char do inicio e do fim da str - verificar se s1 e set nao sao nulos
//s1: string a ser limpa - set: char a ser removido
//comeca no inicio e incrementa ate chegar no primeiro char que n esta no set
//depois decrementa pra cortar o final - calcula tamanho da new subs
//aloca memoria - copia - retorna ponteiro para new

/*int	main(void)
{
	char	frase[50] = "-----casa--carro-cara----";
	char	*set = "-";
	char	*result;

	result = ft_strtrim(frase, set);
	if (result)
	{
		printf("original: %s\n", frase);
		printf("trimmed: %s\n", result);
		free (result);
	}
	return (0);
}*/
