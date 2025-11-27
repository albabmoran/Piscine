/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarreir <jbarreir@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:22:02 by jbarreir          #+#    #+#             */
/*   Updated: 2025/11/09 11:16:30 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		col;
	int		row;

	if ((x == 0) || (y == 0))
		write(1, "Error: x and y must be greater than 0.\n", 39);
	row = 0;
	while (row < y && x > 0 && y > 0)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (col == x - 1 && row == y - 1)
				|| (col == x - 1 && row == 0) || (col == 0 && row == y - 1))
				ft_putchar('o');
			else if (col == 0 || col == x - 1)
				ft_putchar('|');
			else if (row == 0 || row == y - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
