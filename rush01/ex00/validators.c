/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:10:12 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/25 19:19:39 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_validator(char **tableau, int ligne, int colonne, int akinator)
{
	if (ft_validator_nord(tableau, colonne, param) == 0)
		return (1);
	if (ft_validator_sud(tableau, colonne, param) == 0)
		return (1);
	if (ft_validator_est(tableau, colonne, param) == 0)
		return (1);
	if (ft_validator_ouest(tableau, colonne, param) == 0)
		return (1);
	else
		return (0);
}

int	ft_validator_nord(char **tableau, int colonne, int param)
{
	int	i;
	int	max;
	int	elem;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 5)
	{
		if (tableau[i][colonne] > max)
		{
			count++;
			max = elem[i];
		}
		i++;
	}
	if (count == param)
		return (1);
	return (0);
}

int	ft_validator_sud(char **tableau, int colonne, int param)
{
	int	i;
	int	max;
	int	elem;
	int	count;

	i = 4;
	max = 0;
	count = 0;
	while (i < 0)
	{
		if (tableau[i][colonne] > max)
		{
			count++;
			max = elem[i];
		}
		i--;
	}
	if (count == param)
		return (1);
	return (0);
}

int	ft_validator_est(char **tableau, int ligne, int param)
{
	int	i;
	int	max;
	int	elem;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 5)
	{
		if (tableau[ligne][i] > max)
		{
			count++;
			max = elem[i];
		}
		i++;
	}
	if (count == param)
		return (1);
	return (0);
}

int	ft_validator_ouest(char **tableau, int ligne, int param)
{
	int	i;
	int	max;
	int	elem;
	int	count;

	i = 4;
	max = 0;
	count = 0;
	while (i < 0)
	{
		if (tableau[i][colonne] > max)
		{
			count++;
			max = elem[i];
		}
		i--;
	}
	if (count == param)
		return (1);
	return (0);
}
