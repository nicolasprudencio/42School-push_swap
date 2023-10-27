/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:25:09 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/27 17:09:51 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack *stck_a, t_stack *stck_b)
{
	int	mid_value;
	t_dlist	*top;
	// t_dlist	*b_top;
	
	top = stck_a->top;
	mid_value = find_mid_value(stck_a->top);
	while (1)
	{
		if (top->value < mid_value)
			stack_push_ab(stck_a, stck_b);
		else
		{
			stack_swap(stck_a);
			if (top->value < mid_value)
				stack_push_ab(stck_a, stck_b);
			else
			{
				stack_rotate(stck_a);
				if (top->value < mid_value)
					stack_push_ab(stck_a, stck_b);
			}
		}
		while (top)
		{
			if (top->value <  mid_value)
				sort_stack(stck_a, stck_b);
			top = top->next;
		}
		return ;
	}
}