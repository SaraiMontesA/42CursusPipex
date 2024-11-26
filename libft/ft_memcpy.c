/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:22:16 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:22:38 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función memcpy() copia n bytes desde el área de memoria src hacia el área
de memoria dest. Las dos áreas no deben superponerse. Si es el caso, 
utilice memmove() en su lugar. */
/* La función memcpy() devuelve un puntero a dest. */

/* The memcpy() function copies n bytes from the memory area src to the memory
area dest. The two areas must not overlap. If they do, use memmove() instead. */
/* The memcpy() function returns a pointer to dest. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
