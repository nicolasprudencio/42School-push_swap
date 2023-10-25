/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_double_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:29:34 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/25 17:50:50 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_double_swap(t_stack	*stack_a, t_stack *stack_b)
{
	if (!stack_a->top || !stack_b->top)
	{
		ft_putstr_fd("Error!\n", 2);
		return (0);
	}
	else if (stack_a->top && stack_b->top)
	{
		stack_swap(stack_a);
		stack_swap(stack_b);
	}
	ft_printf("ss\n");
	return (1);
}
