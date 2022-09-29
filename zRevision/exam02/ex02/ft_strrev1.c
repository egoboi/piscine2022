/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:43:58 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/28 19:28:37 by fbrisson         ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int	i;
	int	size;
	int	temp;

	i = 0;
	size = ft_strlen(str);
	size--;
	while (size > i)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
		i++;
		size--;
	}
	return (str);
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab[] = "BABINKS";
	char	*a;

	a = ft_strrev(tab);
	printf("%s\n", a);
	return (0);
}*/
