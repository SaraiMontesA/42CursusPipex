/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:40:50 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:42:18 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strlcat() añade la cadena terminada en NUL src al final de 
	dst. Añadirá como máximo size - strlen(dst) - 1 bytes, terminando el 
	resultado con NUL. */
/* Las funciones strlcat() devuelven la longitud total de la cadena que 
	intentaron crear, lo que significa la longitud inicial de dst más la longitud
	de src. */

/* The strlcat() function appends the NUL-terminated string src to the end of 
	dst. It will append at most size - strlen(dst) - 1 bytes,
	NUL-terminating the result. */
/* The strlcat() functions return the total length of the string they tried 
	to create that means the initial length of dst plus the length of src. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	m;
	size_t	p;

	m = 0;
	n = ft_strlen(dst);
	p = ft_strlen(src);
	if (size == 0)
		return (p);
	while ((src[m] != '\0') && ((n + m) < (size - 1)))
	{
		dst[n + m] = src[m];
		m++;
	}
	dst[n + m] = '\0';
	if (size > n)
		return (n + p);
	return (size + p);
}
