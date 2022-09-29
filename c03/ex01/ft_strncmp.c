/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:53:03 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/25 14:42:21 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	tab1[] = "BOBOYS";
	char	tab2[] = "BOBOY";
	int	a;
	int	b;
	a = strncmp(tab1, tab2, 6);

	b = ft_strncmp(tab1, tab2, 6);
	printf("%d", a);
	printf("%d", b);
}*/
