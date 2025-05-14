/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 03:40:46 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 20:40:09 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//como strchr procura a ocorrencia de um char em uma string MAS A ULTIMA
//retorna um ponteiro para a ultima ocorrencia

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

/*int     main(void)
{
        char    frase[20] = "happy saturday night";
        char    *result;

        result = ft_strrchr(frase, 'y');
        printf("Frase: %s\nResultado: %s\n", frase, result);
        return (0);
}*/
