/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 23:02:43 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/12 21:48:18 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int     main(void)
{
        char    baba = '5';
        char    bebe = 'a';

        printf("retorno: %d\n", ft_isdigit(baba));
        printf("retorno: %d\n", ft_isdigit(bebe));
        return (0);
}*/
