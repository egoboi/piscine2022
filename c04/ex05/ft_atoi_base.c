/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:37:30 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/03 21:02:41 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_base_settings(char *base)
{
	int	i;
	int	j;
	int	basesize;

	basesize = ft_strlen(base);
	i = 0;
	if (basesize <= 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[i] == 45 || base[i] == 43
				|| base[i] == 32 || base[i] > 126 || base[j] == 45
				|| base[j] == 43 || base[j] == 32 || base[j] > 126
				|| (base[i] >= 9 && base[i] <= 13)
				|| (base[j] >= 9 && base [i] <= 13))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	counter;
	int	res;
	int	size;

	res = 0;
	counter = 1;
	size = ft_strlen(base);
	i = 0;
	if (ft_base_settings(base) == 0)
		return (0);
	while ((str[i] <= 32) || str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			counter *= -1;
		i++;
	}
	while (str[i] != '\0' && ft_check_base_ivalue(str[i], base) != -1)
	{
		res = (res * size) + (ft_check_base_ivalue(str[i], base));
		i++;
	}
	return (res * counter);
}

/*

#include <stdio.h>

int	main(int ac, char **av)
{
	(void)	ac;
	printf("%d\n", ft_atoi_base(av[1], av[2]));
	return (0);
}*/
