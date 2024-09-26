/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:25:41 by soamara           #+#    #+#             */
/*   Updated: 2024/09/25 19:36:50 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;
	int	i;

	len = max - min;
	if (len <= 0)
		return (NULL);
	tab = (int *)malloc((len + 1) * sizeof(int));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min ++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
