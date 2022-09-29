/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:44:14 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/27 15:26:03 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long int	i;
	long int	lnb;

	lnb = nb;
	if (lnb <= 1)
		return (0);
	if (lnb <= 3)
		return (1);
	if (lnb % 2 == 0 || lnb % 3 == 0)
		return (0);
	i = 5;
	while (i * i < lnb)
	{
		if (lnb % i == 0)
			return (0);
		if (lnb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (ft_is_prime(i) != 1)
	{
		i++;
	}
	return (i);
}

/*

#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_find_next_prime(46572957);
	printf("%d\n", a);
	return (0);
}*/
