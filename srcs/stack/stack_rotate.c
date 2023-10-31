/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:37:31 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/31 17:12:08 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_rotate(t_stack *stack)
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
		ft_printf("r%c\n", stack->name);
		return (1);
	}
	return (0);
}
