/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:54:22 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 18:56:59 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//S: string fonte para criacao substring - len: comp maximo da substring
//start: o indice inicial onde coemca a subs da string 's'

/*int	main(void)
{
	char str[] = "casa sem teto, sem chao, sem paredes";
	char *cpy;

	copia = ft_substr(str, 15, 8);
	printf("result: %s\n", cpy);
	free (cpy);
	return (0);
}*/
