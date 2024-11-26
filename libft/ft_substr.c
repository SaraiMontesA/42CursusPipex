/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:49:33 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:50:01 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Asigna (con malloc()) y devuelve una cadena de caracteres derivada de la 
cadena 's'. Esta nueva cadena comienza en el índice 'start' y tiene un tamaño 
máximo de 'len'. */
/* La nueva cadena de caracteres. NULL si la asignación falla. */

/* Allocates (with malloc()) and returns a string that is a substring of the 
	string 's'. This new string starts at index 'start' and has a maximum size
	of 'len'. */
/* The new string. NULL if the allocation fails. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = (char *)malloc(sizeof(*s) * (len + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			tab[j] = s[i];
			j++;
		}
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
