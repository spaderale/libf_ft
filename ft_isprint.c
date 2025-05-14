/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 23:26:04 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/12 23:57:07 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int     main(void)
{
        char    frase = 'C';
        char    frase2 = '\t';

        printf("retorno: %d\n", ft_isprint(frase));
        printf("retorno: %d\n", ft_isprint(frase2));
        return (0);
}*/
