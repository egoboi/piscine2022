/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:41:03 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/04 11:26:29 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}

/*

#include <stdio.h>

int	main(void)
{
	int	**tab;
	int	min;
	int	max;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	tab = malloc(sizeof(int *));
	size = ft_ultimate_range(tab, min ,max);
	while (i < size)
		printf("%d\n", tab[0][i++]);
	free(tab);
	return (0);
}*/
