/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:32:39 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:33:06 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Verifica si tenemos un carácter alfanumérico. */
/* Los valores devueltos son no nulos si el carácter c entra en la
categoría probada, y cero en caso contrario. */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
