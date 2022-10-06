/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:15:41 by obouhlel          #+#    #+#             */
/*   Updated: 2022/10/02 19:14:09 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_check_len(char *str);
unsigned int	ft_atoi(char *str);
void			ft_nbr(unsigned int nb);
void			ft_putstr(char *str);

int	main(int ac, char **av)
{
	int	len;

	len = 0;
	if (ac > 3 && ac < 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	len = ft_check_len(av[ac - 1]);
	if (len == 0 || len > 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_nbr(ft_atoi(av[ac - 1]));
	return (0);
}
