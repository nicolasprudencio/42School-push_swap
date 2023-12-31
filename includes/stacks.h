/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:06:58 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/31 12:24:41 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKS_H
# define STACKS_H

typedef struct s_stack
{	
	char	name;
	t_dlist	*top;
	t_dlist	*btm;
}				t_stack;

int		stack_swap(t_stack *stack);
int		stack_rotate(t_stack *stack);
int		stack_rotate_reverse(t_stack *stack);
int		stack_push_ab(t_stack *stack_a, t_stack *stack_b);
int		stack_double_swap(t_stack	*stack_a, t_stack *stack_b);
void	print_stack(t_stack *stack);
int		stack_define(int argc, char **argv, t_stack *stack);
void	stack_double_rotate(t_stack *stck_a, t_stack *stck_b);
void	stack_addbtm(t_stack **stack, t_dlist *node);
void	stack_addtop(t_stack **stack, t_dlist *node);
int		check_stack(t_dlist *top);
void	find_indexes(t_stack *stack);

#endif