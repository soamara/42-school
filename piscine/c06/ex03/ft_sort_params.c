/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:41:32 by soamara           #+#    #+#             */
/*   Updated: 2024/09/23 16:18:15 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a,char **b)
{
	char *swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	k;
	int	j;

	j = argc - 1;
	k = 0;

	while(argv[k] <= argv[j])
	{
		ft_strcmp(argv[j],argv[k]);
		k++;
	}
	return (0);
}
