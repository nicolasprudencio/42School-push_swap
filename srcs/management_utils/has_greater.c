/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_greater.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 00:20:16 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/26 00:22:07 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_greater(t_dlist *head, int value)
{
	t_dlist	*temp;

	if (!head)
		return (-1);
	temp = head;
	while (temp)
	{
		if (temp->value > value)
			return (1);
		temp = temp->next;
	}
	return (0);
}