/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:36:05 by soamara           #+#    #+#             */
/*   Updated: 2024/09/08 13:46:35 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <string.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "123456";
    char str2[] = "123a456";

    // Test avec une chaîne qui contient uniquement des chiffres
    ft_str_is_numeric(str1);  // Affiche '1'
    write(1, "\n", 1);        // Pour passer à la ligne

    // Test avec une chaîne qui contient des lettres et des chiffres
    ft_str_is_numeric(str2);  // Affiche '0'
    write(1, "\n", 1);        // Pour passer à la ligne

    return (0);
}*/
