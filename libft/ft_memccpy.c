/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:52:22 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:53:14 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función memccpy() copia como máximo n bytes del área de memoria src hacia 
el área de memoria dest, deteniéndose tan pronto como encuentra el carácter c.*/
/* La función memccpy() devuelve un puntero al carácter inmediatamente 
después de c en el área dest, o NULL si c no se ha encontrado en los primeros 
n caracteres de src. */

/* The memccpy() function copies up to n bytes from the memory area src to 
the memory area dest, stopping when the character c is found. */
/* The memccpy() function returns a pointer to the character immediately 
after c in the dest area, or NULL if c was not found in the first n characters 
of src. */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_dest;
	unsigned char	*str_src;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str_dest[i] = str_src[i];
		if (str_dest[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
