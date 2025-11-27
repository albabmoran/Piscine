/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:25:37 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/24 15:55:21 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (1);
		while (base[j] && base[i] != base[j])
			j++;
		if (base[i] == base[j])
			return (1);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long int	nb;

	nb = nbr;
	i = check_base(base);
	if (i == 1)
		return ;
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb >= i)
		{
			ft_putnbr_base(nb / i, base);
			ft_putnbr_base(nb % i, base);
		}
		if (nb < i)
			ft_putchar(base[nb]);
	}
}
/*
int	main(void)
{
	int		x = -2147483648;
	char	*base = "01";

	ft_putnbr_base(x, base);
	return (0);
}*/
