/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dladdtop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:59 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/13 19:28:27 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_dladdtop(t_stack **stack, t_dlist *node)
{
	if (!node)
		return ;
	if ((*stack)->top)
	{
		(*stack)->top->prev = node;
		node->next = (*stack)->top;
		(*stack)->top = node;
	}
	else
	{
		(*stack)->top = node;
		(*stack)->btm = node;
	}
}