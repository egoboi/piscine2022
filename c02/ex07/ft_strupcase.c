/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:45:06 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/19 19:19:33 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*

#include <stdio.h>

int	main(void)
{
	//	char	*tab = "Mon gars c'est la fete 42 babinks";
	char	str[500] = "Full Babinks la famille 42";

	ft_strupcase(str);
	printf("%s", str);
	return (0);
}*/
