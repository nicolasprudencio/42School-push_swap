/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:38:39 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/10 19:43:44 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int main(void)
{
	t_stack *stck_a = ft_calloc(1, sizeof(t_stack));
	t_stack *stck_b = ft_calloc(1, sizeof(t_stack));
	int	i = -1;
	
	stck_b->top = NULL;
	stck_b->btm = NULL;
	stck_a->top = ft_calloc(1, sizeof(t_dlist));
	stck_a->btm = NULL;
	while (++i < 5)
		ft_dladdtop(&stck_a->top,ft_dlnew(i));
	ft_printf("stack_a:\n");
	print_stack(stck_a);
	stack_push_ab(stck_a, stck_b);
	stack_push_ab(stck_a, stck_b);
	stack_push_ab(stck_a, stck_b);
	stack_push_ab(stck_a, stck_b);
	ft_printf("stack_b:\n");
	print_stack(stck_b);
	ft_printf("stack_a:\n");
	print_stack(stck_a);
	ft_clear_dlist(stck_a->top);
	ft_clear_dlist(stck_b->top);
	free(stck_a);
	free(stck_b);
	return (0);
}