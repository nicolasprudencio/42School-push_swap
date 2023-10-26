/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:58:36 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/26 18:59:28 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_lst_has(t_dlist	*head, int value)
{
	t_dlist	*temp;

	temp = head;
	while (temp)
	{
		if (value == temp->value)
			return (1);
		temp = temp->next;
	}
	return (0);
}
