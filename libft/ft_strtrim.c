/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:48:45 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:49:07 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Asigna (con malloc) y devuelve una copia de la cadena 's1', sin los 
caracteres especificados en 'set' al principio y al final de la cadena de 
caracteres. */
/* La cadena de caracteres recortada. NULL si la asignación falla. */

/* Allocates (with malloc) and returns a copy of the string 's1', without the 
characters specified in 'set' at the beginning and the end of the string. */
/* The trimmed string. NULL if the allocation fails. */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*tab;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	tab = ft_substr((char *)s1, 0, len + 1);
	return (tab);
}
