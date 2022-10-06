/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:28:54 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/02 18:51:24 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int num, char *str)
{
	long int	i;
	long int	len;
	long int	div;
	long int	mod;
	long int	lnum;

	lnum = num;
	while (lnum != 0)
	{
		len++;
		lnum = lnum / 10;
	}
	i = 0;
	while (i < len)
	{
		mod = lnum % 10;
		div = lnum / 10;
		str[len - (i + 1)] = mod + 48;
		i++;
	}
	str[len] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	int	i;
	char	buff[20];

	i = 15;
	ft_itoa(i, buff, 10);
	printf("%s\n", buff);
	return (0);
}
