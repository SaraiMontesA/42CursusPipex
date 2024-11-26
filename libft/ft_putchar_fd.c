/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:26:15 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:26:33 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Escribe el carácter 'c' en el descriptor de archivo dado. */
/* Writes the character 'c' to the given file descriptor. */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
