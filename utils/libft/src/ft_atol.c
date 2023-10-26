/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:25:49 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/26 14:04:45 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

long int	ft_atol(char *nptr)
{
	int			i;
	int			is_neg;
	long int	result;

	i = 0;
	result = 0;
	is_neg = 1;
	if (!nptr)
		return (0);
	while (nptr[i] && (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			is_neg = -1;
	}
	while (nptr[i] && ft_isdigit(nptr[i]) == 1)
		result = result * 10 + nptr[i++] - 48;
	return (result * is_neg);
}
