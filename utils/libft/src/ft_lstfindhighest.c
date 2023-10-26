/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindhighest.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:09:31 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/26 18:47:06 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstfindhighest(t_dlist *head)
{
	t_dlist	*temp;
	int		highest;

	temp = head;
	highest = head->value;
	while (temp)
	{
		if (highest < temp->value)
			highest = temp->value;
		temp = temp->next;
	}
	return (highest);
}