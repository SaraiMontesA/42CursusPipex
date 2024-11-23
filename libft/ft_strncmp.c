/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:46:15 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:46:36 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strcmp() compara las dos cadenas s1 y s2. Devuelve un 
entero negativo, cero o positivo, si s1 es respectivamente menor, igual 
o mayor que s2. */
/* La función strncmp() devuelve un entero menor, igual o mayor que cero 
si s1 (o sus primeros n bytes) es respectivamente menor, igual o 
mayor que s2. */

/* The strcmp() function compares the two strings s1 and s2. It returns a 
negative integer, zero, or a positive integer if s1 is respectively less than, 
equal to, or greater than s2. */
/* The strncmp() function returns an integer less than, equal to, or greater 
than zero if s1 (or the first n bytes thereof) is found to be less than, 
equal to, or greater than s2, respectively. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] && (unsigned char)s2[i]
		&& (unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
