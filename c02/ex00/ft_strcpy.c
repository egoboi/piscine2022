/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:09:16 by fbrisson          #+#    #+#             */
/*   Updated: 2022/09/19 13:36:13 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	tab1[] = "Bonjour";
	char	tab2[] = "madames";
	char	*tab3 = "Bonjour";

//	tab3 = malloc(sizeof(char) * 9);
//	tab3 = "Bonjour";

	tab3 = ft_strcpy(tab1, tab2);
	printf("%s\n%s\n%s", tab1, tab2, tab3);
//	free(tab3);
	return (0);
}*/
