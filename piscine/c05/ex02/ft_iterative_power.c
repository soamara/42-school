/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:38:30 by soamara           #+#    #+#             */
/*   Updated: 2024/09/16 14:03:45 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i <= power)
	{
		res = nb * res;
		i++;
	}
	return (res);
}
/*#include <stdio.h>
int main()
{
	int	nb = 3;
	int power = 3;
	printf("%d",ft_iterative_power(nb,power));
}*/
