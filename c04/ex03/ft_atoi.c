/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:16:02 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/26 08:53:32 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	minuscounter;

	i = 0;
	result = 0;
	minuscounter = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			minuscounter *= (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = ((result * 10) + (str[i] - 48));
		i++;
	}
	return (result * minuscounter);
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab[] = " ----+--+1234ab567";
	int	a;

	a = ft_atoi(tab);
	printf("%d", a);
	return (0);
}*/
