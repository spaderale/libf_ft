/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:28:22 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 21:16:25 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//parecido com strcpy mas com alocacao de memoria

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*int	main(void)
{
	const char	*original[] = "Hello, 42 porto";
	char	*copia;

	copia = ft_strdup(original);

	if(copia)
	{
		printf("original: %s\n", original);
		printf("copia: %s\n", copia);
		free (copia);
	}
	return (0);
}*/
