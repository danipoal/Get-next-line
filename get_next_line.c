/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:34:31 by danalvar          #+#    #+#             */
/*   Updated: 2025/02/04 22:35:12 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * Function that reads a file until a \n or \0 is found.
 *
 * @param fd As an argument we give a file descriptor prev got with open()
 *
 * @return A buffer with the string of the x line of the file.
 */

char	*get_next_line(int fd)
{
	static char	*buffer;
	int		bytes_readed;

	buffer = (char *) malloc(BUFFER_SIZE * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_readed = read(fd, buffer, BUFFER_SIZE);
	if (bytes_readed == 0)
		return (NULL);
	return (buffer);
}
