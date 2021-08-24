/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwojdyla <rwojdyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 03:37:39 by rwojdyla          #+#    #+#             */
/*   Updated: 2021/06/03 16:21:43 by rwojdyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		n;
	char		*dst;

	n = 0;
	if (!(s && f))
		return (NULL);
	dst = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(dst))
		return (NULL);
	while (ft_strlen(s) > n)
	{
		dst[n] = f(n, s[n]);
		n++;
	}
	dst[n] = 0;
	return (dst);
}
