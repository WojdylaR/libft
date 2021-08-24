/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwojdyla <rwojdyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 03:37:39 by rwojdyla          #+#    #+#             */
/*   Updated: 2021/06/03 16:20:52 by rwojdyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		j;
	int		i;
	char	*str;

	i = 0;
	j = 0;
	if (!(s1))
		return (0);
	while (s1[i])
		i++;
	str = malloc(sizeof(char) * i + 1);
	if (!(str))
		return (0);
	while (i > j)
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
