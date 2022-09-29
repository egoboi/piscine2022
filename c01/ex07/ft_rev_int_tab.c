/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:04:04 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/18 15:03:33 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	size--;
	i = 0;
	while ((size - i) > 0)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	tableau[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	i;
	int 	size;

	i = 0;
	size = 10;
	ft_rev_int_tab(tableau, 10);
	while (i < size)
	{
		printf("%d", tableau[i]);
		i++;
	}
	return (0);
}
*/
