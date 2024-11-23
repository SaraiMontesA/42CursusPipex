/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:53:57 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:54:37 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función memchr() examina los primeros n bytes del área de memoria 
apuntada por s en busca del carácter c. El primer byte que corresponde a c 
(interpretado como un unsigned char) detiene la operación. */
/* La función memchr() devuelve un puntero al byte correspondiente, o NULL 
si el carácter no está presente en el área de memoria en cuestión. */

/* The memchr() function examines the first n bytes of the memory area 
pointed to by s for the character c. The first byte that matches c 
(interpreted as an unsigned char) stops the operation. */
/* The memchr() function returns a pointer to the matching byte, or NULL 
if the character is not found in the memory area. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_s;

	str_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str_s[i] == (unsigned char)c)
			return (str_s + i);
		i++;
	}
	return (NULL);
}
