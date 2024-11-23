/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:27:11 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:27:48 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Escribe la cadena de caracteres 's' en el descriptor de archivo dado, seguida
de un salto de línea. */
/* Writes the string 's' to the given file descriptor, followed by a newline. */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}
