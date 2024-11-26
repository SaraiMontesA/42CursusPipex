/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:25:08 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:25:44 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función memset() llena los primeros n bytes del área de memoria 
apuntada por s con el byte c. */
/* La función memset() devuelve un puntero al área de memoria s. */

/* The memset() function fills the first n bytes of the memory area 
pointed to by s with the byte c. */
/* The memset() function returns a pointer to the memory area s. */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}
