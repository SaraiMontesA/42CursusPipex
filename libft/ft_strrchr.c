/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:47:57 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:48:19 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strrchr() devuelve un puntero a la última ocurrencia del 
carácter c en la cadena s. */
/* La función strrchr() devuelve un puntero al carácter correspondiente, 
o NULL si el carácter no ha sido encontrado. */

/* The strrchr() function returns a pointer to the last occurrence of 
the character c in the string s. */
/* The strrchr() function returns a pointer to the matching character, 
or NULL if the character is not found. */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (c == '\0')
		return ((char *)s + i);
	while (i--)
	{
		if (s[i] == c)
			return ((char *)(s + i));
	}
	return (0);
}
