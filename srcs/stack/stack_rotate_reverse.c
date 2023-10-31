/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:56:05 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/31 18:30:20 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	stack_rotate_reverse(t_stack *stack)
{
	if (stack->top)
	{	
		if (stack->top->next == stack->btm)
			stack_swap(stack);
		else
		{
			stack->btm->next = stack->top;
			stack->top->prev = stack->btm;
			stack->top = stack->btm;
			stack->top->prev->next = NULL;
			stack->btm = stack->btm->prev;
			stack->top->prev = NULL;
		}
		ft_printf("rr%c\n", stack->name);
		return (1);
	}
	return (0);
}
