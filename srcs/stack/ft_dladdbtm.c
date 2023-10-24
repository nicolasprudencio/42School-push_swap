/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dladdbtm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:55:29 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/23 20:04:50 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	ft_dladdbtm(t_stack **stack, t_dlist *node)
{
	if (!node || !stack)
	{
		ft_printf("Error: one or more parameters are undefined!");
		return ;
	}
	if ((*stack)->btm)
	{
		(*stack)->btm->next = node;
		node->prev = (*stack)->btm;
		(*stack)->btm = node;
	}
	else
	{
		(*stack)->top = node;
		(*stack)->btm = node;
	}
}