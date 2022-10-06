/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:14:38 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/04 11:37:58 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long int	ft_strlen_base(long int nbr, char *base_to);
long int	ft_atoi_base_decimal(char *str, char *base_from);
char		*ft_itoa_base(long int nbr, char *base_to, char *res);
int			ft_base_settings(char *base);
int			ft_check_base_ivalue(char c, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	numberconvert;
	char		*res;

	numberconvert = ft_atoi_base_decimal(nbr, base_from);
	res = malloc(sizeof(*res) * (ft_strlen_base(numberconvert, base_to) + 1));
	if (!res)
		return (NULL);
	if (ft_base_settings(base_from) == 0 || (ft_base_settings(base_to)) == 0)
		return (NULL);
	ft_itoa_base(numberconvert, base_to, res);
	return (res);
}

/*

#include <stdio.h>

int	main(void)
{
	printf("-baaa%s\n", ft_convert_base("-125", "0123456789", "abcde"));
	printf("-125:%s\n", ft_convert_base("-baaa", "abcde", "0123456789"));
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
	printf("RIEN:%s\n", ft_convert_base("", "0123456789", "0123456789"));
	printf("ZERO:%s\n", ft_convert_base("0", "0123456789", "0123456789"));
}*/
