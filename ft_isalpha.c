/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:40:40 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/12 21:41:50 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int main(void)
{
	char letra1 = 'c';
	char letra2 = '4';

	printf("letra1 ('%c'): %d\n", letra1, ft_isalpha(letra1));
	printf("letra2 ('%c'): %d\n", letra2, ft_isalpha(letra2));
	return (0);
}*/
