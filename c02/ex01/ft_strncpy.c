/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:58:26 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/13 18:47:09 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <unistd.h>

int	main(void)
{
	char	dest[15];
	char	src[] = "hola que tal";
	unsigned int	n;
	unsigned int	i;

	n = 14;
	ft_strncpy(dest, src, n);
	i = 0;
	while (i < n)
	{
		write(1, &dest[i], 1);
		if (dest[i] == '\0')
			write(1, "0", 1);
		i++;
	}
	return (0);
}*/
