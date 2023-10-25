/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:21:13 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/25 17:41:35 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_dlclear(t_dlist *list)
{
	t_dlist	*aux;

	if (!list)
		return ;
	aux = list->next;
	while (list->next)
	{
		free(list);
		list = aux;
		aux = list->next;
	}
	free(list);
}
