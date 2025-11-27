/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:06:20 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/24 16:10:54 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char	*base)
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
		if (base[j] == base[i])
			return (1);
		i++;
	}
	return (i);
}

int	check_number(int y, char *str, char *base)
{
	int	x;

	x = 0;
	while (('0' <= str[y] && str[y] <= '9') || ('a' <= str[y] && str[y] <= 'z')
		|| ('A' <= str[y] && str[y] <= 'Z'))
	{
		x = (x * 10) + (base[(str[y] - '0') % i] - '0');
		y++;
	}
	return (x);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	counter;
	int	x;
	int	y;

	i = check_base(base);
	counter = 0;
	x = 0;
	y = 0;
	if (i == 1)
		return (0);
	while (str[y] == ' ' || (9 <= str[y] && str[y] <= 13))
		y++;
	while (str[y] == '-' || str[y] == '+')
	{
		if (str[y] == '-')
			counter++;
		y++;
	}
	x = check_number(y, str, base);
	if (counter % 2 == 1)
		x = -x;
	return (x);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "DA920A";
	char	base[] = "0123456789ABCDEF";
	int	i;

	i = ft_atoi_base(str, base);
	printf("%d", i);
}*/
