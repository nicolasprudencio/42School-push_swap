/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindlowest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:15:57 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/26 18:22:11 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_lstfindlowest(t_dlist *head)
{
	t_dlist	*temp;
	int		lowest;

	temp = head;
	lowest = head->value;
	while (temp)
	{	
		if (lowest > temp->value)
			lowest = temp->value;
		temp = temp->next;
	}
	return (lowest);
}