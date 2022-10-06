/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:30:55 by fbrisson          #+#    #+#             */
/*   Updated: 2022/10/04 14:35:16 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	total_len;

	i = 0;
	dest_len = ft_strlen(dest);
	total_len = ft_strlen(src) + dest_len;
	if (!size)
		return (ft_strlen(src));
	if (size < dest_len)
		return (ft_strlen(src) + size);
	while (src[i] != 0 && dest_len + i < size - 1)
		dest[dest_len + i++] = src[i++];
	dest[dest_len + i] = '\0';
	return (total_len);
}
