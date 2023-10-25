/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_addbtm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:55:29 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/25 17:49:46 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_addbtm(t_stack **stack, t_dlist *node)
{
	if (!node || !stack)
	{
		ft_printf("Error: one or more parameters are undefined!");
		return ;
	}
	if ((*stack)->btm)
	{
		(*stack)->btm->next = node;
		node->prev = (*stack)->btm;
		(*stack)->btm = node;
	}
	else
	{
		(*stack)->top = node;
		(*stack)->btm = node;
	}
}