/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:55:32 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/04 11:17:27 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *(charset ++))
			return (1);
	}
	return (0);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_check_sep(str[i], charset))
		i++;
	return (i);
}

int	ft_word_count(char *str, char *charset)
{
	int	wordcount;

	wordcount = 0;
	while (*str)
	{
		while (*str && ft_check_sep(*str, charset))
			str++;
		if (*str)
			wordcount++;
		while (*str && !ft_check_sep(*str, charset))
			str++;
	}
	return (wordcount);
}

char	*ft_write_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		count;

	count = 0;
	len = ft_strlen_sep(str, charset);
	word = malloc(sizeof(*word) * (len + 1));
	if (!word)
		return (0);
	while (*str && !ft_check_sep(*str, charset))
		word[count++] = *(str++);
	word[count] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		count;

	count = 0;
	tab = malloc(sizeof(*tab) * (ft_word_count(str, charset) + 1));
	if (!tab)
		return (0);
	while (*str)
	{
		while (*str && ft_check_sep(*str, charset))
			str++;
		if (*str)
		{
			tab[count] = ft_write_word(str, charset);
			if (!tab[count++])
				return (0);
		}
		while (*str && !ft_check_sep(*str, charset))
			str++;
	}
	tab[count] = 0;
	return (tab);
}

/*

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	char	**tab;
	int		i;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	tab = ft_split(av[1], av[2]);
	while (i < ft_word_count(av[1], av[2]))
	{
		printf("%s\n", tab[i]);
		free(tab[i++]);
	}
	free(tab);
	return (0);
}*/
