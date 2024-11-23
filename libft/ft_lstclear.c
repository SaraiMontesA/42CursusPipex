/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:42:27 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:43:47 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Elimina y libera la memoria del elemento pasado como parámetro, y de todos 
los elementos que le siguen, utilizando del y free(3). Finalmente, el puntero 
inicial debe ser puesto a NULL. */
/* Deletes and frees the memory of the element passed as a parameter, and all 
the elements that follow, using del and free(3). Finally, the initial pointer 
must be set to NULL. */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}
