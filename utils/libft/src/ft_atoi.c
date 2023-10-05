/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 20:33:30 by nprudenc          #+#    #+#             */
/*   Updated: 2023/09/15 09:01:00 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{	
	int	i;
	int	is_neg;
	int	result;

	i = 0;
	is_neg = 0;
	result = 0;
	if (!nptr)
		return (0);
	while (nptr[i] && (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			is_neg++;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]) == 1)
	{
		result = result * 10 + nptr[i] - 48;
		i++;
	}
	if (is_neg == 1)
		return (result * -1);
	return (result);
}
