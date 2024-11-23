/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:51:33 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:51:50 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* toupper() convierte la letra c en mayúscula si es posible. */
/* El valor devuelto es el de la letra convertida, o c si la 
conversión no fue posible. */

/* toupper() converts the letter c to uppercase if possible. */
/* The return value is that of the converted letter, or c if the 
conversion was not possible. */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
