/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:24:15 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/20 18:20:21 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (sub[0] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == sub[j] && (i + j) < n && sub[j])
			j++;
		if (sub[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*a = "testando substring testando";
	char	*b = "sub";
	char	*result;

	result = ft_strnstr(a, b, 15);
	printf("result: %s\n", result);
	return (0);
}*/
