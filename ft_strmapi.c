/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 01:12:22 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/27 21:34:54 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//aplicar a funcao f para cada char da string s.
//retorna uma nova string modificada

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new_str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*char	replace_a(unsigned int i, char c)
{
	(void)i;
	if (c == 'a' || c == 'A')
		return ('@');
	return (c);
}

int	main(void)
{
	char	*original = "alexandre spader";
	char	*modified;

	modified = ft_strmapi(original, replace_a);
	printf("Original: %s\n", original);
	printf("Modificada: %s\n", modified);
	free (modified);
	return (0);
}*/
