/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:21:00 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:21:27 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función memcmp() compara los primeros n bytes de las áreas de memoria s1 y
s2. Devuelve un entero menor, igual o mayor que cero, si s1 es
respectivamente menor, igual o mayor que s2.  */
/* La función memcmp() devuelve un entero negativo, cero o positivo si los
primeros n bytes de s1 son respectivamente menores, iguales o mayores que los
primeros n bytes de s2.   */

/* The memcmp() function compares the first n bytes of the memory areas s1 and
s2. It returns an integer less than, equal to, or greater than zero if s1 is
found, respectively, to be less than, to match, or be greater than s2.  */
/* The memcmp() function returns a negative, zero, or positive integer if the
first n bytes of s1 are respectively less than, equal to, or greater than the
first n bytes of s2.   */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str_s1;
	unsigned char	*str_s2;

	i = 0;
	str_s1 = (unsigned char *)s1;
	str_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str_s1[i] == str_s2[i] && i < n - 1)
	{
		i++;
	}
	return (str_s1[i] - str_s2[i]);
}
