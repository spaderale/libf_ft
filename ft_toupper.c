/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 03:09:04 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/18 16:03:50 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int     main(void)
{
        char    kaka = 'k';
        char    keke = 'Y';

        printf("retorno: %c\n", ft_toupper(kaka));
        printf("retorno: %c\n", ft_toupper(keke));
        return (0);
}*/
