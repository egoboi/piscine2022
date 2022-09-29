/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:49:54 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/25 09:48:50 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab1[25] = "Victor";
	char	tab2[25] = "le bg";
	char	*a;

	a = ft_strcat(tab1, tab2);
	printf("%s", a);
	printf("%d", ft_strlen(tab1));
	return (0);
}*/
