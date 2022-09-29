/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:59:25 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/28 11:51:05 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (max <= min)
		return (NULL);
	tab = malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	min;
	int	max;
	int	i;

	min = 1;
	max = 250000000;
	i = 0;
	tab = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
