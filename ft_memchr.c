/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:50:45 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 20:37:22 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//parecido com strstr mas com bytes
//procura os primeiros n bytes em s
//retorna um ponteiro pro primeiro byte encontrado

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	frase[] = "Hello 42 porto";
	char	result;

	resut = ft_memchr(frase, 'p', 10);
	printf("result: %s\n", result);
	return (0);
}*/
