/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:50:14 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/03 19:16:33 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_base_settings(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[i] == 45 || base[i] == 43
				|| base[i] == 32 || base[i] > 126 || base[j] == 45
				|| base[j] == 43 || base[j] == 32 || base[j] > 126
				|| (base[i] >= 9 && base[i] <= 13)
				|| (base[j] >= 9 && base[j] <= 13))
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_check_base_ivalue(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long int	ft_strlen_base(long int nbr, char *base_to)
{
	long int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / (ft_base_settings(base_to));
		i++;
	}
	return (i);
}

long int	ft_atoi_base_decimal(char *str, char *base_from)
{
	long int	counter;
	long int	res;
	long int	size;
	int			i;

	res = 0;
	counter = 1;
	size = ft_base_settings(base_from);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i++] == 45)
			counter *= -1;
	}
	while (str[i] != '\0' && ft_check_base_ivalue(str[i], base_from) > -1)
	{
		res = (res * size) + (ft_check_base_ivalue(str[i], base_from));
		i++;
	}
	return (res * counter);
}

char	*ft_itoa_base(long int nbr, char *base_to, char *res)
{
	int	len;

	len = ft_strlen_base(nbr, base_to);
	res[len] = '\0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		res[0] = base_to[0];
	while (nbr > 0)
	{
		res[len - 1] = base_to[nbr % ft_base_settings(base_to)];
		nbr = nbr / ft_base_settings(base_to);
		len--;
	}
	return (res);
}
