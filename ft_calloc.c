/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:58:34 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/29 18:07:36 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//parecido com malloc mas preenche com zero onde quer alocar memória

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;
	size_t			size_total;

	i = 0;
	size_total = count * size;
	if (size && ((size_total / size) != count))
		return (NULL);
	tmp = malloc(size_total);
	if (!tmp)
		return (NULL);
	while (i < size_total)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

/*int	main(void)
{
	int *arr = (int *)ft_calloc(5, sizeof(int));
	if(!arr)
		return (1);
	for (size_t i = 0; i < 5; i++)
		printf("arr[%zu] = %d\n", i, arr[i]);
	for(size_t j = 0; j < 3; j++)
		printf("arr[%zu] = %d\n", j, arr[j]);
	free (arr);
	return (0);
}*/
