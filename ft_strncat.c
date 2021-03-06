/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyassine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 06:57:24 by tyassine          #+#    #+#             */
/*   Updated: 2015/12/15 22:23:52 by tyassine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = ft_strlen(s1);
	while (n--)
	{
		s1[i] = *s2;
		s2 = *s2 ? s2 + 1 : s2;
		if (!s1[i++])
			break ;
	}
	s1[i] = '\0';
	return (s1);
}
