/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:58 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:36:21 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Verifica si tenemos un dígito (0 a 9). */
/* Los valores devueltos son no nulos si el carácter c entra en la
categoría probada, y cero en caso contrario. */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
