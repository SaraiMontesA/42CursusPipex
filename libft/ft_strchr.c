/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:37:28 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:38:24 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strchr() devuelve un puntero a la primera ocurrencia del 
carácter c en la cadena s. */
/* La función strchr() devuelve un puntero al carácter correspondiente, 
o NULL si el carácter no ha sido encontrado. */

/* The strchr() function returns a pointer to the first occurrence of 
the character c in the string s. */
/* The strchr() function returns a pointer to the matching character, 
or NULL if the character is not found. */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
