/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:43:47 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:44:18 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strlen() calcula la longitud de la cadena de caracteres s, sin 
contar el byte nulo « \0 » final. */
/* La función strlen() devuelve el número de caracteres en la cadena s. */

/* The strlen() function calculates the length of the string s, not 
including the terminating null byte ('\0'). */
/* The strlen() function returns the number of characters in the string s. */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t			i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
