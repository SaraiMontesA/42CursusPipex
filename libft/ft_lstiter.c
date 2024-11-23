/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:45:16 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:46:12 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itera sobre la lista lst y aplica la función f al contenido de
	cada elemento. */
/* Iterates over the list lst and applies the function f to the content of
	each element. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
