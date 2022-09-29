/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:50:45 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/27 10:23:15 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		resultat *= nb;
		power--;
	}
	return (resultat);
}

/*

#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_iterative_power(25, 10);
	printf("%d\n", a);
}*/
