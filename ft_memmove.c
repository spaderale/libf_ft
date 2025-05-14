/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 01:02:39 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 20:24:47 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//parecida com a memcpy mas trata sobreposicao

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dest);
}

/*int	main(void)
{
	char	str[] = "papagaio maluco";
	char	*cpy;

	cpy = malloc(ft_strlen(str) + 1);
	ft_memmove(cpy, str, 15);
	printf("cpy: %s\n", cpy);
	free (cpy);
	return (0);
}*/
