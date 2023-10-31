/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_indexes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:59:49 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/31 13:13:08 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_nxt_lower(int lowest, t_dlist *stack)
{
	t_dlist	*temp;
	int		output;

	output = ft_lstfindhighest(stack);
	temp = stack;
	while (temp)
	{
		if (temp->value > lowest && temp->value < output)
			output = temp->value;
		temp = temp->next;
	}
	return (output);
}

static t_dlist	*lst_position(int value, t_dlist *top)
{
	t_dlist	*temp;

	temp = top;
	while (temp)
	{
		if (temp->value == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

void	find_indexes(t_stack *stack)
{
	int	lower;
	int	size;
	int	i;

	i = -1;
	lower = ft_lstfindlowest(stack->top);
	size = find_stack_size(stack->top);
	while(++i < size)
	{	
		lst_position(lower, stack->top)->index = i;
		lower = find_nxt_lower(lower, stack->top);
	}
}