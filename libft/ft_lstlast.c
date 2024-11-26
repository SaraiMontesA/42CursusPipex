/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:46:45 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:47:07 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Devuelve el último elemento de la lista. */
/* Returns the last element of the list. */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
