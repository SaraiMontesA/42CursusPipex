/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:40:39 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:41:35 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Añade el elemento 'new' al inicio de la lista. */
/* Adds the element 'new' to the beginning of the list. */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
