/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dladdtop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:59 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/23 19:58:06 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_dladdtop(t_stack **stack, t_dlist *node)
{
	if (!node || !stack)
	{
		ft_printf("Error: one or more parameters are undefined!");
		return ;
	}
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