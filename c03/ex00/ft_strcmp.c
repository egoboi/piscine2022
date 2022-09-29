/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:41:05 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/21 09:12:56 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab1[] = "LUFFY";
	char	tab2[] = "JOIBOI";
	int	a;

	a = ft_strcmp(tab1, tab2);
	printf("%d", a);
}*/
