/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:23:28 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:24:08 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función memmove() copia n bytes desde el área de memoria src hacia el área
de memoria dest. Las dos áreas pueden superponerse: la copia se realiza como 
si los bytes de src se copiaran primero en un área temporal que no se 
superpone ni a src ni a dest, y luego los bytes se copian del área temporal 
a dest.  */
/* La función memmove() devuelve un puntero a dest. */

/* The memmove() function copies n bytes from the memory area src to the memory 
area dest. The two areas may overlap: the copy is performed as if the bytes 
from src are first copied to a temporary area that does not overlap src or 
dest, and the bytes are then copied from the temporary area to dest.  */
/* The memmove() function returns a pointer to dest. */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*str_dest;
	char			*str_src;

	str_dest = (char *)dest;
	str_src = (char *)src;
	if (str_dest > str_src)
	{
		while (n--)
			str_dest[n] = str_src[n];
	}
	else if (str_dest < str_src)
		ft_memcpy(dest, src, n);
	return (dest);
}
