/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:16:13 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/18 14:02:26 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*

#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 153;
	b = 10;
	pa = &a;
	pb = &b;
	ft_ultimate_div_mod(pa, pb);
	printf("%d\n", a);
	printf("%d", b);
	return (0);
}*/
