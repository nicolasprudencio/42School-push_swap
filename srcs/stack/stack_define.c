/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_define.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:39:47 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/23 20:41:22 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void stack_define(char	*argv, int argc, t_stack *stack)
{
	char	*pre_stack;
	int		i;

	if (argc < 2)
		return ;
	i = 0;	
	while (++i < argc)
	{
		ft_dladdbtm(&stack, ft_atoi(argv[i]));
	}
}