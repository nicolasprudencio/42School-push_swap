/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_addtop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:59 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/25 17:50:30 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_addtop(t_stack **stack, t_dlist *node)
{
	if (!node || !stack)
	{
		ft_printf("Error!");
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