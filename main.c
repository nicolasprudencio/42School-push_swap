/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:38:39 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/25 18:20:04 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void free_stacks(t_stack	*stck_a, t_stack *stck_b);

int main(int argc, char *argv[])
{
	t_stack *stck_a = ft_calloc(1, sizeof(t_stack));
	t_stack *stck_b = ft_calloc(1, sizeof(t_stack));
	
	stck_a->name = 'a';
	stck_b->name = 'b';
	stck_b->top = NULL;
	stck_b->btm = NULL;
	
	if (!stack_define(argc, argv, stck_a))
		throw_error(stck_a, stck_b);
	ft_printf("stack_a:\n");
	print_stack(stck_a);
	stack_push_ab(stck_a, stck_b);
	stack_push_ab(stck_a, stck_b);
	ft_printf("stack_a:\n");
	print_stack(stck_a);
	ft_printf("stack_b:\n");
	print_stack(stck_b);
	stack_double_rotate(stck_a, stck_b);
	ft_printf("stack_a:\n");
	print_stack(stck_a);
	ft_printf("stack_b:\n");
	print_stack(stck_b);
	// stack_swap(stck_a);
	// stack_rotate(stck_a);
	// ft_printf("stack_a:\n");
	// print_stack(stck_a);
	free_stacks(stck_a, stck_b);
	return (0);
}

void throw_error(t_stack *stck_a, t_stack *stck_b)
{
		free_stacks(stck_a, stck_b);
		ft_putstr_fd("Error!\n", 2);
		exit(1);
}

static	void free_stacks(t_stack	*stck_a, t_stack *stck_b)
{
	ft_dlclear(stck_a->top);
	ft_dlclear(stck_b->top);
	free(stck_a);
	free(stck_b);
}
