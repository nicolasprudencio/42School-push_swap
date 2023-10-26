/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:37:31 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/26 15:54:27 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_rotate_reverse(t_stack *stack)
{
	if (!stack->btm)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (stack->top)
	{
		if (stack->top == stack->btm)
			stack_swap(stack);
		else
		{
			stack->top->prev = stack->btm;
			stack->btm->next = stack->top;
			stack->top = stack->top->next;
			stack->top->prev = NULL;
			stack->btm = stack->btm->next;
			stack->btm->next = NULL;
		}
		return (1);
	}
	return (0);
}
