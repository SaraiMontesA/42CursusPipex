/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:19:28 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:20:48 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función bzero() pone a 0 (octetos que contienen « \0 »)
	los primeros n octetos del bloque apuntado por s. */
/* VALOR DEVUELTO: Ninguno. */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		*str = 0;
		str++;
		n--;
	}
}
