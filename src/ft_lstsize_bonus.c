/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandro <alejandro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 08:56:04 by alex              #+#    #+#             */
/*   Updated: 2026/05/27 08:28:18 by alejandro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		size;

	size = 0;
	aux = lst;
	while (aux)
	{
		aux = aux->next;
		size += 1;
	}
	return (size);
}
