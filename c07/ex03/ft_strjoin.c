/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:39:46 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/04 17:57:22 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_strlenmax(char **str, int size)
{
	int	i;
	int	j;
	int	maxlen;

	i = 0;
	maxlen = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			maxlen++;
			j++;
		}
		i++;
	}
	return (maxlen);
}

char	*ft_empty_malloc(void)
{
	char	*tab;

	tab = malloc(sizeof(char));
	if (!tab)
		return (NULL);
	tab[0] = 0;
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		maxlen;
	int		lensep;

	lensep = ft_strlen(sep);
	maxlen = ft_strlenmax(strs, size);
	if (size == 0)
		return (ft_empty_malloc());
	dest = malloc(sizeof(*dest) * ((lensep * (size - 1)) + maxlen + 1));
	if (dest == NULL)
		return (0);
	dest[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i + 1 != size)
			ft_strcat(dest, sep);
		i++;
	}
	dest[(lensep * (size - 1) + maxlen)] = '\0';
	return (dest);
}

/*

#include <stdio.h>

int	main(void)
{
	char	*dest;
	char	sep[] = " ";
	char	*str[] = {""," boi","BABINKS","BAHBOY","","AAAA", "GGGGGG"};
	int	size = 0;
	
	dest = ft_strjoin(size, str, sep);
	printf("%c", *dest + 48);
	printf("%s", dest);
	free(dest);
	return (0);
}*/
