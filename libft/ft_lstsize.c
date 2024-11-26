/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:51:07 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:51:23 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cuenta el número de elementos de la lista. */
/* Counts the number of elements in the list. */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
