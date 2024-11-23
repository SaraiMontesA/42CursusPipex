/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:39:02 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:39:26 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strdup() devuelve un puntero a una nueva cadena de 
caracteres que es duplicada desde s. La memoria ocupada por esta nueva 
cadena se obtiene llamando a malloc(), y puede (debe) ser liberada con 
free(). */
/* La función strdup() devuelve un puntero a la cadena duplicada, o NULL 
si no había suficiente memoria. */

/* The strdup() function returns a pointer to a new string 
which is a duplicate of the string s. The memory occupied by this new 
string is obtained by calling malloc(), and can (must) be freed with 
free(). */
/* The strdup() function returns a pointer to the duplicated string, or NULL 
if there was insufficient memory. */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
