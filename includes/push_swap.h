/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:46:07 by nicolas           #+#    #+#             */
/*   Updated: 2023/10/26 13:13:54 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ideia possível, ter uma estrutura com tamanho total da stack, e que possui referencia para o top das duas stacks */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "stacks.h"

void	throw_error(t_stack *stck_a, t_stack *stck_b);
int		has_lower(t_dlist *head, int value);
int		has_greater(t_dlist *head, int value);

#endif