/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:25:09 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/31 18:57:00 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stack *stack)
{
	int	highest;

	// int	highest;

	// highest = dll_highest(stack->top);
	// if (dll_index(stack->top, highest) == 1)
	// 	stck_rott_rotate(stack, 1);
	// else if (dll_index(stack->top, highest) == 2)
	// 	stck_rott_rgt(stack, 1);
	// if (stack->top->as_int > stack->top->next->as_int)
	// 	stck_swap(stack, 1);

	highest = ft_lstfindhighest(stack->top);
	if (stack->top->index == 2)
		stack_rotate(stack);
	else if (stack->top->next->index == 2)
		stack_rotate_reverse(stack);
	if (stack->top->value > stack->top->next->value)
		stack_swap(stack);
}

static void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top->next->index == 3)
		stack_swap(stack_a);
	else if (stack_a->btm->index == 3)
		stack_rotate_reverse(stack_a);
	else if (stack_a->btm->prev->index == 3)
	{
		stack_rotate_reverse(stack_a);
		stack_rotate_reverse(stack_a);
	}
	stack_push_ab(stack_a, stack_b);
	sort_three(stack_a);
	stack_push_ab(stack_b, stack_a);
	stack_rotate(stack_a);
}

static void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top->next->next->index == 4)
	{
		stack_rotate(stack_a);
		stack_rotate(stack_a);
	}
	else if (stack_a->top->next->index == 4)
		stack_swap(stack_a);
	else if (stack_a->btm->index == 4)
		stack_rotate_reverse(stack_a);
	else if (stack_a->btm->prev->index == 4)
	{
		stack_rotate_reverse(stack_a);
		stack_rotate_reverse(stack_a);
	}
	stack_push_ab(stack_a, stack_b);
	sort_four(stack_a, stack_b);
	stack_push_ab(stack_b, stack_a);
	stack_rotate(stack_a);
}

// static void

static void	radix(t_stack *stck_a, t_stack *stck_b)
{
	int	stck_size;
	int	bit_pos;
	int	i;
	t_dlist	*temp;

	bit_pos = 0;
	stck_size = find_stack_size(stck_a->top);
	while (!stack_is_ordered(stck_a->top))
	{
		i = -1;
		temp = stck_a->top;
		while (++i < stck_size)
		{
			if ((stck_a->top->index >> bit_pos) & 1)
				stack_rotate(stck_a);
			else
				stack_push_ab(stck_a, stck_b);
			// while (temp && (temp->index >> bit_pos) & 1)
			// 	temp = temp->next;
			// if (!temp)
			// 	break;

		}
		send_stack(stck_b, stck_a);
		bit_pos++;
	}
	// print_stack(stck_a);
}

void	sort_stack(t_stack *stck_a, t_stack *stck_b)
{
	int	stack_size;

	find_indexes(stck_a);
	stack_size = find_stack_size(stck_a->top);
	if (stack_size == 5)
		sort_five(stck_a, stck_b);
	else if (stack_size == 4)
		sort_four(stck_a, stck_b);	
	else if (stack_size == 3)
	 	sort_three(stck_a);
	else if (stack_size == 2)
		stack_swap(stck_a);	
	else
		radix(stck_a, stck_b);
	// print_stack(stck_a);	
}