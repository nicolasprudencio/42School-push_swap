/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:15:24 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/30 19:23:24 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	send_stack(t_stack *stck_b, t_stack *stck_a)
{
	while (stck_b->top)
		stack_push_ab(stck_b, stck_a);
	return (1);
}
