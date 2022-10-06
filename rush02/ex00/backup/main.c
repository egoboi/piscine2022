/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:15:41 by obouhlel          #+#    #+#             */
/*   Updated: 2022/10/02 18:28:54 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_nbr(char *str_nb, int len);
void	ft_putstr(char *str);
int		ft_check_len(char *str);
int		ft_atoi(char *str);

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
	if (len == 0 || len == 40)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_nbr(av[ac - 1], len);
	return (0);
}
