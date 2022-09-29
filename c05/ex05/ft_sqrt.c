/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:41:10 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/27 14:05:52 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (i * i != nb)
	{
		if (i > 46341)
			return (0);
		i++;
	}
	return (i);
}

/*

#include <stdio.h>

int	main(void)
{
	int	a;

	a = ft_sqrt(81);
	printf("%d\n", a);
}*/
