/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:05:20 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/18 17:02:27 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;	

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

/*

#include <stdio.h>

int	main(void)
{
	int	tab[10] = {650, 10, 25, 342, 442, 50, 66, 71, 8, 90};
	int	i;
	int	size;
	
	size = sizeof(tab) / sizeof(tab[0]);
	i = 0;
	
	ft_sort_int_tab(tab, size);
	
	while (i <= size - 1)
	{
		printf("%d\n", tab[i]);
		i++;
	} 
	return (0);
}*/
