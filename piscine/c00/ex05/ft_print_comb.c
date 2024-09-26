/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:10:37 by soamara           #+#    #+#             */
/*   Updated: 2024/09/25 18:44:21 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_comb(char a, char b, char c)
{
	write(1, &c, 1);
	write(1, &b, 1);
	write(1, &a, 1);
	if (c != '7' || b != '8' || a != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	c = '0';
	while (c <= '7')
	{
		b = c + 1;
		while (b <= '8')
		{
			a = b + 1;
			while (a <= '9')
			{
				write_comb(a, b, c);
				a++;
			}
			b++;
		}
		c++;
	}
}
/*
int	main(void)
{
	print_comb();
}*/
