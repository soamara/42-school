/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:25:58 by soamara           #+#    #+#             */
/*   Updated: 2024/09/23 14:43:43 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}
/*
int	main(void)
{
	int	nb = 5;
	ft_iterative_factorial(nb);
	printf("%d",ft_iterative_factorial(nb));
}*/
