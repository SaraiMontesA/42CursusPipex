/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:47:09 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:47:31 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función strnstr() localiza la primera ocurrencia de la cadena 
terminada en null little en la cadena big, donde no se buscan más de len 
caracteres. */
/* Si little es una cadena vacía, se devuelve big; si little no aparece en 
ninguna parte de big, se devuelve NULL; de lo contrario, se devuelve un 
puntero al primer carácter de la primera ocurrencia de little. */

/* The strnstr() function locates the first occurrence of the null-terminated 
string little in the string big, where not more than len characters are 
searched. */
/* If little is an empty string, big is returned; if little occurs nowhere in 
big, NULL is returned; otherwise a pointer to the first character of the first 
occurrence of little is returned. */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}
