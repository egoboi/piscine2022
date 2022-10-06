/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:15:32 by obouhlel          #+#    #+#             */
/*   Updated: 2022/10/02 18:27:02 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_read_file(void)
{
	int		fd;
	char	str_size_of_file[1];
	char	*str;
	int		i;

	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	while (read(fd, str_size_of_file, 1) > 0)
		i++;
	close(fd);
	fd = open("numbers.dict", O_RDONLY);
	str = (char *)malloc(sizeof(char) * i);
	if (!str)
		return (0);
	while (read(fd, str, i) > 0)
		;
	close(fd);
	return (str);
}
