/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarmonte <sarmonte@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:38:19 by sarmonte          #+#    #+#             */
/*   Updated: 2024/11/23 13:38:49 by sarmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Asigna (con malloc) y devuelve una cadena de caracteres que representa 
el entero recibido como argumento. Los números negativos deben ser manejados. */
/* La cadena de caracteres que representa el entero. NULL si la asignación 
falla. */

#include "libft.h"

static	char	*ft_swap(char *tab, int size)
{
	int		temp;
	int		i;
	int		j;

	i = 0;
	j = size - 1;
	if (tab[i] == '-')
		i++;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
	return (tab);
}

static	char	*ft_is_zero(char *tab)
{
	int	i;

	i = 0;
	tab[i++] = '0';
	tab[i] = '\0';
	return (tab);
}

static	int	ft_len(int c)
{
	int	len;

	len = 1;
	if (c >= 0)
		c *= -1;
	else
		len++;
	while (c <= -10)
	{
		c /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;
	long	l_n;
	int		len;

	i = 0;
	len = ft_len(n);
	l_n = n;
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (0);
	if (l_n == 0)
		return (ft_is_zero(tab));
	if (l_n < 0)
	{
		l_n = -l_n;
		tab[i++] = '-';
	}
	while (l_n != 0)
	{
		tab[i++] = (l_n % 10) + '0';
		l_n /= 10;
	}
	tab [i] = '\0';
	return (ft_swap (tab, ft_strlen(tab)));
}
