/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:54:17 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/21 17:22:24 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab1 [] = "SEARCH THE ONE PIECE, THE ONE PIECE IS KEY";
	char	tab2 [] = "ONE";
	char	*a;

	a = ft_strstr(tab1, tab2);
	printf("%s", a);
	return (0);
}*/
