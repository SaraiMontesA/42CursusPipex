/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:34:46 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:35:16 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Verifica si c es un unsigned char de 7 bits, que pertenece al conjunto de 
caracteres ASCII. */
/* Los valores devueltos son no nulos si el carácter c entra en la 
categoría probada, y cero en caso contrario. */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
