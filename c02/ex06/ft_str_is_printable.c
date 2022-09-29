/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:00:58 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/20 17:42:01 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > 126)
			return (0);
		else
			i++;
	}
	return (1);
}

/*

#include <stdio.h>

int	main(void)
{
	char *str = "\n\f";
	int	a;

	a = ft_str_is_printable(str);
	printf("%d", a);
	return (0);
}*/
