/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:29:47 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/31 18:01:46 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_stack_size(t_dlist *lst)
{	
	int	lst_len;
	t_dlist	*temp;

	lst_len = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		lst_len++;
	}
	return (lst_len);
}