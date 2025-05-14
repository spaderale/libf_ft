/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 03:24:17 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 20:38:44 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//procura primeira ocorrencia de um char em uma string
//retorna um ponteiro p o primeiro char encontrado ou nulo

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

/*int     main(void)
{
        char    frase[20] = "happy developer here";
        char    *resultado;

        resultado = ft_strchr(frase, 'd');
        printf("Frase: %s\n Retorno: %s\n", frase, resultado);
        return (0);
}*/
