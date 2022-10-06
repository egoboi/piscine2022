/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:22:18 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/05 10:37:14 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *(charset++))
			return (1);
	}
	return (0);
}

int	strings_count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !check_sep(*str, charset))
			str++;
	}
	return (count);
}

int	ft_strlensep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], charset))
		i++;
	return (i);
}

char	*motus(char *str, char *charset)
{
	int		i;
	int		len;
	char	*mot;

	i = 0;
	len = ft_strlensep(str, charset);
	mot = malloc(sizeof(*mot) * (len + 1));
	if (!mot)
		return (NULL);
	while (*str && !check_sep(*str, charset))
		mot[i++] = *(str++);
	mot[i] = '\0';
	return (mot);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(*tab) * (strings_count(str, charset) + 1));
	if (!tab)
		return (NULL);
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
		{
			tab[i] = motus(str, charset);
			if (!tab[i++])
				return (0);
		}
		while (*str && !check_sep(*str, charset))
			str++;
	}
	tab[i] = '\0';
	return (tab);
}

/*

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char **split;

	i = 0;
	if (ac  != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	split = ft_split(av[1], av[2]);
	while (i < strings_count(av[1], av[2]))
	{
		printf("%s\n", split[i]);
		free(split[i++]);
	}
	free(split);
	return (0);
}*/
