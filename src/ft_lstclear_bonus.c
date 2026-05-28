/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandro <alejandro@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 09:15:32 by alex              #+#    #+#             */
/*   Updated: 2026/05/27 08:32:59 by alejandro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	while (lst[0])
	{
		aux = lst[0];
		lst = &(lst[0]->next);
		del(aux->content);
		free(aux);
	}
	lst[0] = NULL;
}
