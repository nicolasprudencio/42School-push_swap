/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:38:39 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/24 15:46:49 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

static	void free_stacks(t_stack	*stck_a, t_stack *stck_b)
{
	ft_clear_dlist(stck_a->top);
	ft_clear_dlist(stck_b->top);
	free(stck_a);
	free(stck_b);
}

int main(int argc, char *argv[])
{
	t_stack *stck_a = ft_calloc(1, sizeof(t_stack));
	t_stack *stck_b = ft_calloc(1, sizeof(t_stack));
	
	stck_b->top = NULL;
	stck_b->btm = NULL;
	stck_a->top = NULL;
	stck_a->btm = NULL;
	
	if (!stack_define(argc, argv, stck_a))
	{
		free_stacks(stck_a, stck_b);
		ft_putstr_fd("Error!\n", 2);
		exit(1);
	}
	ft_printf("stack_a:\n");
	print_stack(stck_a);
	// printf("%d", stck_a->btm->value);
	// stack_push_ab(stck_a, stck_b);
	// stack_push_ab(stck_a, stck_b);
	// stack_push_ab(stck_a, stck_b);
	// stack_push_ab(stck_a, stck_b);
	// ft_printf("stack_b:\n");
	// print_stack(stck_b);
	// stack_swap(stck_a);
	// stack_rotate(stck_a);
	// ft_printf("stack_a:\n");
	// print_stack(stck_a);
	return (0);
}