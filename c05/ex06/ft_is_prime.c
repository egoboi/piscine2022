/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:46:39 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/27 15:24:35 by fbrisson         ###   ########.fr       */
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

#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_is_prime(50051);
	printf("%d\n", a);
}
