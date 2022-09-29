/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:41:03 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/28 16:57:31 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (max <= min)
		return (NULL);
	tab = malloc(sizeof(**range) * (max - min));
	if (range == NULL)
		return (0);
	i = 0;
	while (i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

#include <stdio.h>

int	main(void)
{
	int	**tab;
	int	min;
	int	max;
	int	i;

	min = 1;
	max = 50;
	i = 0;
	tab = ft_ultimate_range(tab, min, max);
	while (i < (max - min))
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
