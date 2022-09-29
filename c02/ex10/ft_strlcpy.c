/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:09:15 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/20 19:41:19 by fbrisson         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (ft_strlen(src) == 0 || ft_strlen(dest) == 0)
		return (ft_strlen(src));
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0')
	{
		if (src[i] != '\0' && i < (size - 1))
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab1[] = "boy my boy";
	char	tab2[] = "yeah he knows this stuff";

	ft_strlcpy(tab1, tab2, 5);
	printf("%s", tab1);
	return (0);
}*/
