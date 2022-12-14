/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:54:33 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/28 19:29:17 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
		write(1, "\n", 1);
	i = 0;
	while (av[1][i] == ' ' || av[1][i] == '\t')
		i++;
	while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
