/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:29:04 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/21 19:59:17 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	i;
	long int	div;
	long int	mod;

	i = nb;
	if (i < 0)
	{
		i = i * (-1);
		ft_putchar('-');
	}
	div = i / 10;
	mod = i % 10;
	if (div != 0)
	{
		ft_putnbr(div);
	}
	ft_putchar(48 + mod);
}

/*

int	main(void)
{
	int	a;

	a = -2147483648;
	ft_putnbr(a);
	return (0);
}*/
