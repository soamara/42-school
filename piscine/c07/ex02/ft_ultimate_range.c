/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 03:56:46 by soamara           #+#    #+#             */
/*   Updated: 2024/09/25 21:02:43 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(len * sizeof(int));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
int main()
{
    int *range;
    int min = 10;
    int max = 20;
    int size;
    int i;

    size = ft_ultimate_range(&range, min, max);
    printf("Size: %d\n", size);
    for (i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    free(range);
    return (0);
}*/
