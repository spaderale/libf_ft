/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 23:21:48 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 17:49:21 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//n: valor a ser convertido - retorna a string representando o inteiro
//get_lenght: calcula quantos chars a string vai precisar para repres. o num.
//while loop: pega cada digito da dir. para a esq.
//(number%10) + '0' converte para ascii, --len preenche a string de tras pra fr.

#include "libft.h"

static int	get_length(long number)
{
	int	len;

	len = 0;
	if (number <= 0)
		len = 1;
	while (number != 0)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	number;
	int		len;
	char	*str;

	number = n;
	len = get_length(number);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (number == 0)
		str[0] = '0';
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		str[--len] = (number % 10) + '0';
		number = number / 10;
	}
	return (str);
}

/*int	main(void)
{
	int		number;
	char	*result;

	number = 254485;
	printf("result: %s\n", result = ft_itoa(number));
	free (result);
	return (0);
}*/
