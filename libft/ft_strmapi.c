/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:44:40 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:45:40 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Aplica la función 'f' a cada carácter de la cadena de caracteres 
pasada como argumento para crear una nueva cadena de caracteres (con malloc)
resultante de las aplicaciones sucesivas de 'f'. */
/* La cadena de caracteres resultante de las aplicaciones sucesivas de f.
Devuelve NULL si la asignación falla. */

/* Applies the function 'f' to each character of the string
passed as an argument to create a new string (with malloc)
resulting from successive applications of 'f'. */
/* The string resulting from successive applications of f.
Returns NULL if the allocation fails. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tab;

	i = 0;
	if (!s || !f)
		return (NULL);
	tab = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (tab == 0)
		return (NULL);
	while (s[i])
	{
		tab[i] = (*f)(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
