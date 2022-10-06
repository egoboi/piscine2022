/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:21:58 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/03 21:01:39 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_base_settings(char *str)
{
	int	i;
	int	j;
	int	size;

	size = ft_strlen(str);
	if (size <= 1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = (i + 1);
		while (str[j] != '\0')
		{
			if (str[i] == str[j] || str[i] == 43 || str[i] == 45
				|| str[i] == 32 || str[i] > 126 || str[j] == 43
				|| str[j] == 45 || str[j] == 32 || str[j] > 126
				|| (str[i] >= 9 && str[j] <= 13)
				|| (str[j] >= 9 && str[j] <= 13))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	lnbr;
	long int	div;
	long int	mod;
	int			basesize;

	if ((ft_base_settings(base)) == 1)
	{
		basesize = ft_strlen(base);
		lnbr = nbr;
		if (lnbr < 0)
		{
			lnbr *= -1;
			ft_putchar('-');
		}
		div = lnbr / basesize;
		mod = lnbr % basesize;
		if (div != 0)
			ft_putnbr_base(div, base);
		write(1, &base[mod], 1);
	}
}

/*

int	main(void)
{
	int	a;
	char	base[] = "0123456789abcdef";

	a = -420;
	ft_putnbr_base(a, base);
	return (0);
}*/
