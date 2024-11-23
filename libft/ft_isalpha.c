/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:33:51 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:34:21 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Verifica si tenemos un carácter alfabético. */
/* Los valores devueltos son no nulos si el carácter c entra en la
categoría probada, y cero en caso contrario. */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
