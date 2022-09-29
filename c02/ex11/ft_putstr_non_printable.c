/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:48:21 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/20 15:44:26 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_in_hexa(char chr)
{
	unsigned char	c;
	char			*base;

	c = chr;
	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > 126)
		{
			ft_write_in_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		if (str[i + 1] != '\0')
			str[i] = '\0';
		i++;
	}
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab[] = "babi\fnks babinks \nhwthwrthwrthwt\fhwqio545435468\n";

	ft_putstr_non_printable(tab);
	printf("%s", tab);
	return (0);
}*/
