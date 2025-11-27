/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:08:01 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/13 18:13:38 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		a = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = a;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
