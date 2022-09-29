/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:54:18 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/25 19:24:21 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_master_searcher(char **tableau, int *ligne, int *colonne)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{	
		j = 1;
		while (j < 5)
		{
			if (tableau[i][j] == '?')
			{
				*ligne = i;
				*colonne = j;
			}
			j++;
		}
		i++;
	}
}

int	ft_master_solver(char **tableau)
{
	int	ligne;
	int	colonne;
	int	akinator;

	ligne = 0;
	colonne = 0;
	akinator = 1;
	if (!ft_master_searcher(tableau, &ligne, &colonne))
		return (1);
	while (akinator < 5)
	{
		if (ft_validator(tableau, ligne, colonne, akinator))
		{
			tableau[ligne][colonne] = akinator;
			if (ft_master_solver(tableau))
				return (1);
			tableau[ligne][colonne] = 0;
		}
		akinator++;
	}
	return (0);
}
