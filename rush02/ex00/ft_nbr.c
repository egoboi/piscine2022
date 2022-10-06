/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:22:49 by obouhlel          #+#    #+#             */
/*   Updated: 2022/10/02 18:54:09 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_write_xxx_nbr(int nb);

void	ft_nbr(int nb)
{
	int	tmp;

	if (nb >= 1 && nb <= 999)
	{
		tmp = nb;
		ft_write_xxx_nbr(tmp);
	}
	else
		ft_putstr("zero");
}
