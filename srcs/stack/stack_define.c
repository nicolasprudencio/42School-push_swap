/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_define.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:39:47 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/24 15:43:27 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

int stack_define(int argc, char **argv, t_stack *stack)
{

	// fazer a tratativa caso uma string seja passada ou haja alguma letra entre os numeros
	int		i;
	int		j;

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