/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:48:14 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/20 22:53:14 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char *str = "hoha";
	char *to_find = "hala";
	char *ret;
	char *str1;

	str1 = strstr(str, to_find);

	printf("Esto lo hace strstr = %s\n", str1);
	ret = ft_strstr(str, to_find);
	printf("%s", ret);
	return (0);

}*/
