/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abroslav <abroslav@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:42:14 by abroslav          #+#    #+#             */
/*   Updated: 2025/04/24 19:48:48 by abroslav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//filedescriptor: quando vc abre um arquivo, o sistema retorna um fd.
//0 -stdin - entrada padrao (teclado)
//1 -stdout - saida padrao (tela)
//2 - stderr - saida de erro 

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	ft_putchar_fd('x', 1);
	return (0);
}*/
