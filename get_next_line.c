/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:12:06 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/08/04 16:43:53 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char *storage;
	char		*temp;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	temp = NULL;
	storage = NULL;
	read_from_fd(fd, &storage, &temp);
	if (storage != NULL && *storage != '\0')
	{
		
	}
}
