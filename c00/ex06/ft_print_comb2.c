/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:29:54 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/15 14:33:48 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_display(int num)
{
	int	affiche;
	int	dizaine;
	int	unite;

	dizaine = num / 10;
	affiche = 48 + dizaine;
	write(1, &affiche, 1);
	unite = num % 10;
	affiche = 48 + unite;
	write(1, &affiche, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{	
			ft_print_display(a);
			write(1, " ", 1);
			ft_print_display(b);
			b++;
			if (a < 98 || b < 99)
			{
				write(1, ", ", 2);
			}
		}
		a++;
	}
}
