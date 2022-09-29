/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:56:10 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/20 18:44:11 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_is_it_alphanumeric(char str)
{
	if (str == '\0')
		return (1);
	if (str < 97 || str > 122)
	{
		if (str > 90 || str < 65)
		{
			if (str > 57 || str < 48)
				return (0);
		}
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (ft_is_it_alphanumeric(str[i - 1]) == 0))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab[500] = " HEY GROS bg sava ou auoi 42la famille +tonzbi";
	
	ft_strcapitalize(tab);
	printf("%s", tab);
	return (0);
}*/
