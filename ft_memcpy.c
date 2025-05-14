/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 00:57:49 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 20:35:35 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copiar um bloco de memoria da src para dst/strings arrays
//dest: ponteiro para onde serao copiados
//n: num de bytes a serem copiados de src p dest
//memcpy nao lida com sobreposicao - diferente de memmove

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*int	main(void)
{
	char	str[] = "pedro pedra";
	char	*cpy;

	cpy = malloc(ft_strlen(str) + 1);
	ft_memcpy(cpy, str, 10);
	printf("cpy: %s\n", cpy);
	free (cpy);
	return (0);
}*/
