/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:29:16 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:29:34 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Escribe la cadena de caracteres 's' en el descriptor de archivo dado. */
/* Writes the string 's' to the given file descriptor. */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
