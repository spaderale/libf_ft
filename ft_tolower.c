/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 03:15:26 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/12 22:18:31 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int     main(void)
{
        char    lele = 'H';
        char    lili = 'A';
        printf("retorno: %c\n", ft_tolower(lele));
        printf("retorno: %c\n", ft_tolower(lili));
        return (0);
}*/
