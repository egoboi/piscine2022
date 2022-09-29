/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:22:18 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/19 13:35:27 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*

#include <stdio.h>

int	main(void)
{
	char	tab1[] = "Babinks";
	char	tab2[] = "Boyoboy";
	char	*tab3 = "Babinks";

	tab3 = ft_strncpy(tab1, tab2, 3);
	printf("%s\n%s\n%s", tab1, tab2, tab3);
	return(0);
}*/
