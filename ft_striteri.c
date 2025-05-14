/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:51:57 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/27 21:46:44 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//aplica a funcao f a cada char de s, modifica a string original

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*void	to_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char	str[] = "HellO WorlD";
	printf("original: %s\n", str);
	ft_striteri(str, to_upper);
	printf("modificado: %s\n", str);
	return (0);
}*/
