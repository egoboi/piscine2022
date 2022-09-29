/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:50:43 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/18 09:47:02 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (i == 0)
			{
				if (j == 0)
					ft_putchar('/');
				else if (j == (y - 1))
					ft_putchar('\\');
				else
					ft_putchar('*');	
			}
			else if (i == (x - 1))
			{
				if (j == 0)
					ft_putchar('\\');
				else if (j == (y - 1))
					ft_putchar('/');
				else
					ft_putchar('*');
			}
			else
			{ 
				if (j == 0 || j == (y - 1))
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
		i++;
		}
	ft_putchar('\n');	
	j++;
	}
}

int	main(void)
{
	rush(5, 3);
	return (0);
}
