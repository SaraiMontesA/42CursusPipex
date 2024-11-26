/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:44:18 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:44:36 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Libera la memoria del elemento pasado como argumento utilizando la función 
del y luego con free(3). La memoria de next no debe ser liberada. */
/* Frees the memory of the element passed as an argument using the function 
del and then with free(3). The memory of next must not be freed. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	if (lst->content)
	{
		del(lst->content);
		free(lst);
	}
}
