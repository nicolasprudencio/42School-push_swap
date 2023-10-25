/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_define.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:39:47 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/25 20:56:13 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// needs to treat the -44-44 example number

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
		while (argv[i][++j])
		{	
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-')
				return (0);
		}
		stack_addbtm(&stack, ft_dlnew(ft_atoi(argv[i])));
	}
	return (1);
}