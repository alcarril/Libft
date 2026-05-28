/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandro <alejandro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:04:03 by alex              #+#    #+#             */
/*   Updated: 2026/05/27 08:28:57 by alejandro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = *lst;
	new->next = NULL;
	if (!aux && new)
		*lst = new;
	else
	{
		while (aux && new && aux->next)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
}
