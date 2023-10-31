/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:38:39 by nprudenc          #+#    #+#             */
/*   Updated: 2023/10/31 20:04:31 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void free_stacks(t_stack	*stck_a, t_stack *stck_b);
static	int check_s(char *argv[]);

int main(int argc, char *argv[])
{
	t_stack *stck_a;
	t_stack *stck_b;
	
	if (argc < 2)
		return (0);
	if (!check_s(argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	stck_a = ft_calloc(1, sizeof(t_stack));
	stck_b = ft_calloc(1, sizeof(t_stack));
	if (!stack_define(argc, argv, stck_a))
		throw_error(stck_a, stck_b);
	stack_define(0, NULL, stck_b);
	if (!check_stack(stck_a->top))
		throw_error(stck_a, stck_b);
	sort_stack(stck_a, stck_b);
	free_stacks(stck_a, stck_b);
	return (0);
}

int	fp_strcmp(char *str1, char *str2)
{
	int	i;

	i = -1;
	while (str1[++i] && str2[i] && str1[i] == str2[i])
		;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

static int check_s(char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (argv[++i])
	{
		j = i;
		while (argv[++j])
		{
			if (!fp_strcmp(argv[i], argv[j]))
				return (0);
		}
	}
	return (1);
}

void throw_error(t_stack *stck_a, t_stack *stck_b)
{
		free_stacks(stck_a, stck_b);
		ft_putstr_fd("Error\n", 2);
		exit(1);
}

static	void free_stacks(t_stack	*stck_a, t_stack *stck_b)
{
	ft_dlclear(stck_a->top);
	ft_dlclear(stck_b->top);
	free(stck_a);
	free(stck_b);
}
