/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 23:20:01 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/12 21:54:45 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int     main(void)
{
        char    baba = '5';
        char    bebe = 'a';
        char    bibi = '/';

        printf("retorno: %d\n", ft_isalnum(baba));
        printf("retorno: %d\n", ft_isalnum(bebe));
        printf("retorno: %d\n", ft_isalnum(bibi));
        return (0);
}*/
