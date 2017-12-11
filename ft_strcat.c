/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 22:23:02 by ttran             #+#    #+#             */
/*   Updated: 2017/12/07 12:56:05 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		s1[i++] = s2[n++];
	s1[i] = '\0';
	return (s1);
}