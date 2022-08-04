/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:59:19 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/08/04 17:17:11 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void    read_from_fd(int fd ,char **storage, char **temp)
{
	char	*buffer;
	int		r;
	
	buffer = malloc(sizeof(buffer) * (BUFFER_SIZE + 1));
	if (!buffer)
		return ;
	r = 1;
	while (r > 0)
	{
		r = read(fd, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			free_strs();
			return ;
		}
	}
	buffer[r] = '\0';
	
}