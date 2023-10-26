/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_define.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:39:47 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/26 15:22:35 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// needs to treat the -44-44 example number

static int	check_stack(t_dlist *top)
{	
	t_dlist	*current;
	t_dlist	*temp;

	if (top->next)
		temp = top->next;
	else
		return (1);	
	current = top;
	while (temp)
	{
		if (current->value == temp->value)
			return (0);
		temp = temp->next;
	}
	check_stack(current->next);
	return (1);
}

int stack_define(int argc, char **argv, t_stack *stack)
{
	int		i;
	int		j;
	
	stack->top = NULL;
	stack->btm = NULL;
	if (argc < 2)
		return (0);
	i = 0;
	while (++i < argc)
	{
		j = -1;
		if (!ft_isnbr(argv[i]))
			return (0);
		stack_addbtm(&stack, ft_dlnew(ft_atoi(argv[i])));
	}
	if (!check_stack(stack->top))
		return (0);
	return (1);
}