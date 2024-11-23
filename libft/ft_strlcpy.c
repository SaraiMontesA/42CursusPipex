/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:42:51 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:43:20 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strlcpy() copia hasta size caracteres de la cadena 
terminada en NUL src a dst, terminando el resultado con NUL. */
/* Las funciones strlcpy() devuelven la longitud total de la cadena 
que intentaron crear. Para strlcpy() eso significa la longitud de src. */

/* The strlcpy() function copies up to size characters from the 
NUL-terminated string src to dst, NUL-terminating the result. */
/* The strlcpy() functions return the total length of the string 
they tried to create. For strlcpy() that means the length of src. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (src[i] && --size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
