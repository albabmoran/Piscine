/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:50:48 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/27 16:44:38 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_string(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

int	ft_strlen(char	*sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		n_sep;
	int		n_string;
	int		i;

	if (size == 0)
	{
		res = malloc(0);
		return (res);
	}
	n_string = count_string(strs);
	n_sep = n_string - 1;
	res = malloc((size + (ft_strlen(sep) * n_sep) + 1) * 1);
	if (!res)
		return (NULL);
	i = 0;
	while (strs[i] && i < n_string)
	{
		ft_strcat(res, strs[i]);
		if (n_sep > 0)
			ft_strcat(res, sep);
		i++;
		n_sep--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	int		size = 20;
//	char	*strs[] = {"miau", "miau", "miau", "miau", "miau"};
	char	*sep = ", ";
	char	*res;

	res =  ft_strjoin(size, argv, sep);
	printf("%s", res);
	free(res);
	return (0);
}*/
