/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:22:34 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 18:59:53 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		result[j] = s2[i];
		j++;
		i++;
	}
	result[j] = '\0';
	return (result);
}

//concatena 2strgs - verifica se s1 e s2 n sao nulas
//calcular tamanho de s1 e s2 - alocar memoria suficiente p nova str
//copia s1 e copia s2 - finaliza com nulo

/*int	main()
{
	char	s1[25] = "A vida é bela";
	char	s2[10] = "aproveite";
	char	*retorno;

	retorno = ft_strjoin(s1, s2);
	printf("joined: %s\n", retorno);
	free (retorno);
	return (0);
}*/
