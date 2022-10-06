/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 09:33:09 by obouhlel          #+#    #+#             */
/*   Updated: 2022/10/02 16:45:30 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_check_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_nb_word(char *str, char *charset)
{
	int	i;
	int	nb_w;

	nb_w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (ft_check_charset(str[i], charset))
		{
			i++;
			if (str[i] == '\0')
				return (nb_w);
		}
		while (!(ft_check_charset(str[i], charset)) && str[i] != '\0')
			i++;
		nb_w++;
	}
	return (nb_w);
}

int	*ft_strlen(char *str, char *charset)
{
	int	i;
	int	j;
	int	k;
	int	*tab;

	tab = (int *)malloc(sizeof(int) * ft_nb_word(str, charset));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (str[i] && ft_nb_word(str, charset) > 0)
	{
		k = 0;
		while (ft_check_charset(str[i], charset))
			i++;
		while (!(ft_check_charset(str[i], charset)) && str[i] != '\0')
		{
			k++;
			i++;
		}
		tab[j] = k;
		j++;
	}
	return (tab);
}

char	*ft_duplicate(char *src, char *dest, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !ft_check_charset(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		*tab;
	int		i;
	int		j;

	tab = ft_strlen(str, charset);
	strs = (char **)malloc(sizeof(char *) * ft_nb_word(str, charset) + 1);
	if (!strs)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!ft_check_charset(str[i], charset) && j < ft_nb_word(str, charset))
		{
			strs[j] = (char *)malloc(sizeof(char) * tab[j] + 1);
			strs[j] = ft_duplicate(&str[i], strs[j], charset);
			i = i + tab[j];
			j++;
		}
		i++;
	}	
	strs[j] = '\0';
	return (strs);
}
/*
int		main(int ac, char **av)
{
	(void)ac;
	char		**strs;
	int		i;
	int		j;

	strs = ft_split(",, ,,, test1,test2,test3    ,test4   ,test8,,,,", ", ");
	i = -1;
	while (strs[++i])
		printf("strs[%d] = %s\n", i, strs[i]);
	return (0);
}
*/
