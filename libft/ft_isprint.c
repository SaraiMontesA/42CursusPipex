/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:37:04 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:37:40 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Verifica si se trata de un carácter imprimible, incluyendo el espacio. */
/* Los valores devueltos son no nulos si el carácter c entra en la 
categoría probada, y cero en caso contrario. */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
