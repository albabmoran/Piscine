/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:16:43 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/20 23:01:42 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = 0;
	len_src = 0;
	while (dest[len_dest] != '\0' && len_dest < size)
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size == len_dest)
		return (len_src + size);
	while (size - len_dest - i - 1 > 0 && src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int argc, char **argv)
{
	char			*dest_cpy;
	char			*dest;
	char			*src;
	unsigned int	nb;
	if (argc != 4)
		return (-1);
	dest_cpy = strdup(argv[1]);
	dest = strdup(argv[1]);
	src = strdup(argv[2]);
	nb = ft_strlcat(dest, src, (unsigned int)atoi(argv[3]));
	printf("dest before: %s\nsrc:%s\nnb:%d\ndest after: %s\n",
		dest_cpy, src, nb, dest);
	free(dest_cpy);
	free(dest);
	free(src);
	return (0);
}*/
