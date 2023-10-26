/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:15:56 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/26 15:54:40 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	stack_swap(t_stack *stack)
{
	if (!stack->top)
	{	
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (stack->top->next)
	{
		stack->top->value ^= stack->top->next->value;
		stack->top->next->value ^= stack->top->value;
		stack->top->value ^= stack->top->next->value;
		return (1);
	}
	return (0);
}
