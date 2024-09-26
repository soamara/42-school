/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:00:41 by soamara           #+#    #+#             */
/*   Updated: 2024/09/25 16:37:24 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a +1;
		while (b <= 99)
		{
			ft_putchar('0' + a / 10);
			ft_putchar(48 + a % 10);
			ft_putchar(' ');
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
/*
void	ft_print_comb2(void);

int		main(void)
{
	ft_print_comb2();
}*/
