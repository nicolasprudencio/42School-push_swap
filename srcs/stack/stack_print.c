/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:29:14 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/31 18:01:31 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *stack)
{
	t_dlist	*temp;
	
	temp = stack->top;
	ft_printf("*********\n");
	while (temp)
	{
		printf("*%4d i:%i*\n", temp->value, temp->index);
		temp = temp->next;
	}
	ft_printf("*********\n");
}