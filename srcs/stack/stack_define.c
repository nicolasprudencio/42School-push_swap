/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_define.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:39:47 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/24 17:01:45 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int stack_define(int argc, char **argv, t_stack *stack)
{

	// fazer a tratativa caso uma string seja passada ou haja alguma letra entre os numeros
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
			if (!ft_isdigit(argv[i][j]))
				return (0);
		}
		ft_dladdbtm(&stack, ft_dlnew(ft_atoi(argv[i])));
	}
	return (1);
}