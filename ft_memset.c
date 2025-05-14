/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 00:44:20 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 20:21:32 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//usada para preencher uma area de memoria com um valor especifico
//s: ponteiro para memoria que vai preencher
//c: valor a ser colocado na memoria (convertido unsigned char)
//n: num de bytes a serem preenchidos com c

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	frase[10] = "abcdefg";

	ft_memset(frase, 'x', 3);
	printf("ft_memset: %s\n", frase);
	return (0);
}*/
