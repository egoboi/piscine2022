/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:07:58 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/26 16:48:52 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long int	factorial;
	long int	i;

	factorial = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}

/*

#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_iterative_factorial(12);
	printf("%d\n", a);
}*/
