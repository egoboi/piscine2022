/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:26:54 by obouhlel          #+#    #+#             */
/*   Updated: 2022/10/02 18:24:48 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
char    **ft_nbr_dict(void);

void	ft_write_1x_nbr(int nb)
{
	
}

void	ft_write_10_nbr(int nb)
{
	
}

void	ft_write_1_nbr(int nb)
{
	
}

void	ft_put_space(int nb)
{
	if (nb >= 1 && nb <= 9)
		ft_putstr(" ");
	if (nb >= 100)
		ft_putstr(" hundred");
}

void	ft_write_xxx_nbr(int nb)
{
	int	nb_100;
	int	nb_10;

	if (nb >= 1 && nb <= 999)
	{
		nb_100 = nb / 100;
		nb_10 = nb % 100;
		ft_write_1_nbr(nb_100);
		ft_put_space(nb_100 * 100);
		if (nb_10 >= 10 && nb_10 <= 19)
		{
			ft_put_space(nb_100);
			ft_write_1x_nbr(nb_10);
		}
		if (nb_10 >= 20 && nb_10 <= 99)
		{
			ft_put_space(nb_100);
			ft_write_10_nbr((nb_10 / 10) * 10);
			ft_put_space(nb_10 % 10);
			ft_write_1_nbr(nb_10 % 10);
		}
		if (nb >= 0 && nb <= 9)
			ft_write_1_nbr(nb);
	}
}
