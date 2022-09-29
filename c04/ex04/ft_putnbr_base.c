/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:21:58 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/26 08:52:40 by fbrisson         ###   ########.fr       */
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
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		j = (i + 1);
		while (str[j] != '\0')
		{
			if (str[i] == str[j] || str[i] == '+' || str[i] == '-'
				|| str[j] == '+' || str[j] == '-' || str[i] <= ' '
				|| str[i] > 126 || str[j] <= ' ' || str[j] > 126)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	i;
	long int	div;
	long int	mod;
	long int	basesize;

	if ((ft_base_settings(base)) == 1)
		write(1, "\0", 1);
	else
	{
		basesize = ft_strlen(base);
		i = nbr;
		if (i < 0)
		{
			i *= (-1);
			ft_putchar('-');
		}
		div = i / basesize;
		mod = i % basesize;
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

	a = 420;
	ft_putnbr_base(a, base);
	return (0);
}*/
