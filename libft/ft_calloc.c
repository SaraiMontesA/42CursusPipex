/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:22:00 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:25:27 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* calloc() asigna la memoria necesaria para un arreglo de nmemb elementos de
tamaño size bytes, y devuelve un puntero a la memoria asignada. Esta área 
se llena con ceros. Si nmemb o size es 0, calloc() devuelve NULL o un puntero 
único que podrá ser pasado posteriormente a free() con éxito. */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = malloc (nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
