/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 01:41:12 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/16 20:29:17 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*int     main(void)
{
        char    frase[20] = "pindamonhangaba";
        char    frase2[20];
        size_t result = ft_strlcpy(frase2, frase, sizeof(frase));

        printf("Retorno: %s\n", frase2);
        printf("retorno: %zu\n", result);
        return (0);
}*/
