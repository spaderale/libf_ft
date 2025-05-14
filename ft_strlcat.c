/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 03:18:14 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 17:54:51 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < dstsize && dest[i] != '\0')
		i++;
	if (i == dstsize)
		return (dstsize + ft_strlen(src));
	j = 0;
	while ((i + j + 1) < dstsize && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*int main(void)
{
    char frase1[20] = "Janela";
    char frase2[] = " voadora";

    size_t result = ft_strlcat(frase1, frase2, sizeof(frase1));
    printf("Resultado: %s\n", frase1);
    printf("Retorno: %zu\n", result);

    return 0;
}*/
