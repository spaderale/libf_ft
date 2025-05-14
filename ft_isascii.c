/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 23:23:50 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/12 22:01:07 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int     main(void)
{
        int     kaka = 258;
        char    keke = '\n';
        char    kiki = '@';

        printf("retorno: %d\n", ft_isascii(kaka));
        printf("retorno: %d\n", ft_isascii(keke));
        printf("retorno: %d\n", ft_isascii(kiki));
        return (0);
}*/
