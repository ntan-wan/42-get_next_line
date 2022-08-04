/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:16:22 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/08/04 16:23:20 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	stdio.h is included as BUFSIZ is declared in here.
	The value for BUFSIZ should normally be 256KB, 512 KB or 4096 KB. This 
	depends on the system and the compiler.
*/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE BUFSIZ
# endif

char	*get_next_line(int fd);

void	read_from_fd(int fd, char **storage , char **temp);
#endif