/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:29:55 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/05 13:58:43 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i != 'a')
	{
		write (1, &i, 1);
		i--;
	}
	write (1, "a", 1);
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
