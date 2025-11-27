/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:52:32 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/06 15:38:06 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
#include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int	x;
	int	y;

	a = &x;
	b = &y;
	*a = 2;
	*b = 6;
	ft_swap(a, b);
	printf("%d%d", *a, *b);
	return (0);
}*/
