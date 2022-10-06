/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:26:54 by obouhlel          #+#    #+#             */
/*   Updated: 2022/10/02 19:12:29 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
char	**ft_nbr_dict(void);

void	ft_write_1x_nbr(unsigned int nb)
{
	if (nb == 10)
		ft_putstr("ten");
	if (nb == 11)
		ft_putstr("eleven");
	if (nb == 12)
		ft_putstr("twelve");
	if (nb == 13)
		ft_putstr("thirteen");
	if (nb == 14)
		ft_putstr("fourteen");
	if (nb == 15)
		ft_putstr("fifteen");
	if (nb == 16)
		ft_putstr("sixteen");
	if (nb == 17)
		ft_putstr("seventeen");
	if (nb == 18)
		ft_putstr("eighteen");
	if (nb == 19)
		ft_putstr("nineteen");
}

void	ft_write_10_nbr(unsigned int nb)
{
	if (nb == 20)
		ft_putstr("twenty");
	if (nb == 30)
		ft_putstr("thirty");
	if (nb == 40)
		ft_putstr("forty");
	if (nb == 50)
		ft_putstr("fifty");
	if (nb == 60)
		ft_putstr("sixty");
	if (nb == 70)
		ft_putstr("seventy");
	if (nb == 80)
		ft_putstr("eighty");
	if (nb == 90)
		ft_putstr("ninety");
}

void	ft_write_1_nbr(unsigned int nb)
{
	if (nb == 0)
		return ;
	if (nb == 1)
		ft_putstr("one");
	if (nb == 2)
		ft_putstr("two");
	if (nb == 3)
		ft_putstr("three");
	if (nb == 4)
		ft_putstr("four");
	if (nb == 5)
		ft_putstr("five");
	if (nb == 6)
		ft_putstr("six");
	if (nb == 7)
		ft_putstr("seven");
	if (nb == 8)
		ft_putstr("eight");
	if (nb == 9)
		ft_putstr("nine");
}

void	ft_put_space(unsigned int nb)
{
	if (nb >= 1 && nb <= 9)
		ft_putstr(" ");
	if (nb >= 100)
		ft_putstr(" hundred");
}

void	ft_write_xxx_nbr(unsigned int nb)
{
	unsigned int	nb_100;
	unsigned int	nb_10;

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
