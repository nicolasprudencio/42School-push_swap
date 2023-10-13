/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_dlist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:21:13 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/13 19:13:33 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_clear_dlist(t_dlist *list)
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
	// ft_printf()
	free(list);
}