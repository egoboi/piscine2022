/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:43:21 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/01 16:07:52 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_atoi(char *str)
{
	int	i;
	int	resultat;

	resultat = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		resultat = (resultat * 10) + (str[i] - 48);
		i++;
	}
	return (resultat);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "12345";
	int	a;

	a = ft_atoi(str);
	printf("%d\n", a);
	return (0);
}
*/
