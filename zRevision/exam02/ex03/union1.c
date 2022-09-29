/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:26:47 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/28 19:21:36 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_doubles1(char *str, char c, int cursor)
{
	int	i;

	i = 0;
	while (i < cursor)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_doubles2(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_check_doubles1(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (ft_check_doubles2(s1, s2[i]) == 1)
		{
			if (ft_check_doubles1(s2, s2[i], i) == 1)
				write(1, &s2[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_union(av[1], av[2]);
	return (0);
}
