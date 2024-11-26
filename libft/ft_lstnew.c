/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:49:24 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:50:34 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Asigna (con malloc) y devuelve un nuevo elemento. La variable content se 
inicializa con el valor del parámetro content. La variable 'next' se 
inicializa a NULL. */
/* Valor de retorno: El nuevo elemento */

/* Allocates (with malloc) and returns a new element. The content variable is 
initialized with the value of the content parameter. The 'next' variable is 
initialized to NULL. */
/* Return value: The new element */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(*list));
	if (list == NULL)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
