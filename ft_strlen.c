/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 00:39:49 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/12 22:30:03 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*int     main(void)
{
        char    frase[50] = "sabado a noite e eu aqui";
        char    frase2[20] = "mas poderia ser pior";

        printf("len frase1: %zu\n", ft_strlen(frase));
        printf("len frase2: %zu\n", ft_strlen(frase2));
        return (0);
}*/
