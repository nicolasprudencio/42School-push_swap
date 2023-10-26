/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:41:59 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/26 15:54:19 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_push_ab(t_stack *stack_a, t_stack *stack_b)
{
	t_dlist	*a_top;

	if (!stack_a || !stack_a->top || !stack_b)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (stack_a->top->next)
	{
		a_top = stack_a->top->next;
		a_top->prev = NULL;
	}
	else
		a_top = NULL;
	if (!stack_b->top)
	{
		stack_b->top = stack_a->top;
		stack_b->btm = stack_a->top;
		stack_a->top = a_top;
		stack_b->top->prev = NULL;
		stack_b->top->next = NULL;
	}
	else
	{
		stack_b->top->prev = stack_a->top;
		stack_a->top->next = stack_b->top;
		stack_b->top = stack_a->top;
		stack_a->top = a_top;
	}
	ft_printf("p%c\n", stack_b->name);
	return (1);
}
