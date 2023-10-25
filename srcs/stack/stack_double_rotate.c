/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_double_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:09:27 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/25 17:50:36 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_double_rotate(t_stack *stck_a, t_stack *stck_b)
{
	if (!stack_rotate(stck_a) || !stack_rotate(stck_b))
		throw_error(stck_a, stck_b);
	printf("rr\n");
}
