/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:39:54 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:40:14 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Asigna (con malloc) y devuelve una nueva cadena, resultado de la 
concatenación de s1 y s2. */
/* La nueva cadena de caracteres. NULL si la asignación falla. */

/* Allocates (with malloc) and returns a new string, which is the result of 
the concatenation of s1 and s2. */
/* The new string. NULL if the allocation fails. */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (tab == 0)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		tab[i] = s2[j];
		j++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
