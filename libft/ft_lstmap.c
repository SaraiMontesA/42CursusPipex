/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:47:50 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 14:24:40 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itera sobre la lista lst y aplica la función f al contenido de cada 
elemento. Crea una nueva lista resultante de las aplicaciones sucesivas de f. 
La función del está para destruir el contenido de un elemento si es necesario.*/
/* Iterates over the list lst and applies the function f to the content of each 
element. Creates a new list resulting from the successive applications of f. 
The del function is there to destroy the content of an element if necessary. */

#include "libft.h"

static	t_list	*ft_newlst(t_list *new_lst, t_list *lst, void *(*f)(void *)
							, void (*del)(void *))
{
	t_list	*add;

	add = ft_lstnew(f(lst->content));
	if (add == NULL)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	ft_lstadd_back(&new_lst, add);
	return (new_lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (lst == NULL)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (new_lst == NULL)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		ft_newlst(new_lst, lst, f, del);
		lst = lst->next;
	}
	return (new_lst);
}
