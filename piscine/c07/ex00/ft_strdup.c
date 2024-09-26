/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:25:32 by soamara           #+#    #+#             */
/*   Updated: 2024/09/23 19:48:28 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*s1;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	s1 = (char *)malloc(i + 1 * sizeof (char));
	if (s1 == NULL)
		return (NULL);
	while (src[j])
	{
		s1[j] = src[j];
		j++;
	}
	s1[j] = '\0';
	return (s1);
}
