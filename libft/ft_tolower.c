/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:50:35 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:51:05 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* tolower() convierte la letra c en minúscula si es posible. */
/* El valor devuelto es el de la letra convertida, o c si la 
conversión no fue posible. */

/* tolower() converts the letter c to lowercase if possible. */
/* The return value is that of the converted letter, or c if the 
conversion was not possible. */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
