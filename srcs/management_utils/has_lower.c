/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_lower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:59:27 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/26 00:19:15 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_lower(t_dlist *head, int value)
{
	t_dlist	*temp;

	if (!head)
		return (-1);
	temp = head;
	while (temp)
	{	
		if (temp->value < value)
			return (1);
		temp = temp->next;
	}
	return (0);
}