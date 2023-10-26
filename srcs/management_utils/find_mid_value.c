/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_mid_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:39:15 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/26 19:30:42 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	int find_median(t_dlist	*head)
{
	t_dlist	*temp;
	int		counter;
	int		i;

	temp = head;
	counter = 0;
	i = 0;
	while (temp && i++ >= 0)
	{
		counter += temp->value;
		temp = temp->next;
	}
	return (counter / i);
}

int	find_mid_value(t_dlist *head)
{	
	int		mid_value;
	int		i;
	int		j;

	i = 0;
	j = 0;
	mid_value = find_median(head);
	while (!ft_lst_has(head, mid_value + i))
		i++;
	while (!ft_lst_has(head, mid_value - j))
		j++;
	if (j - mid_value < i - mid_value)
		return (mid_value - j);	
	return (mid_value + i);
}
