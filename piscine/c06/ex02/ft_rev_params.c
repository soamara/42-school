/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 01:51:38 by soamara           #+#    #+#             */
/*   Updated: 2024/09/18 22:39:56 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	j;

	j = argc - 1;
	while ((argv[j] != argv[0]))
	{
		write(1, argv[j], ft_strlen(argv[j]));
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
