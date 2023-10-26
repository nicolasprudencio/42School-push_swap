/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_addbtm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:55:29 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/26 15:53:43 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_addbtm(t_stack **stack, t_dlist *node)
{
	if (!node || !stack)
	{
		ft_printf("Error\n");
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