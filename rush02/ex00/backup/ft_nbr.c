/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:22:49 by obouhlel          #+#    #+#             */
/*   Updated: 2022/10/02 18:25:02 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
void	ft_write_xxx_nbr(int nb);
char    **ft_split(char *str, char *charset);
char    *ft_read_file(void);

char	**ft_nbr_dict(void)
{
	char *str;
	char **file;
	int	i;

	str = ft_read_file();
	file = ft_split(str, "\n");
	return (file);
}

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
