/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:51:21 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/17 19:52:47 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	modulo;
	long int	div;
	long int	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		lnb = lnb * -1;
		ft_putchar('-');
	}
	div = lnb / 10;
	modulo = lnb % 10;
	if (div != 0)
	{	
		ft_putnbr(div);
	}
	ft_putchar(48 + modulo);
}
