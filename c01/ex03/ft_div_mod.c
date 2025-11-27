/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:39:25 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/10 21:12:24 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	x;
	int	y;

	a = 10;
	b = 3;
	div = &x;
	mod = &y;
	ft_div_mod(a, b, div, mod);
	printf("%d%d", x, y);
	return (0);
}*/
