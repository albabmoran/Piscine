/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:33:19 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/20 22:48:23 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (x < nb && src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	dest[10] = "hola";
	char	src[10] = "quetal";
	unsigned int	nb = 4;
	unsigned int	i = 0;
	char	dest1[9] = "hola";

	ft_strncat(dest, src, nb);
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	strncat(dest1, src, nb);
	i = 0;
    while (dest1[i] != '\0')
    {
        write(1, &dest1[i], 1);
        i++;
    }
	write(1, "\n", 1);
	return (0);
}*/
