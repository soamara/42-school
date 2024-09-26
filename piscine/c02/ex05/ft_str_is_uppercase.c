/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:14:11 by soamara           #+#    #+#             */
/*   Updated: 2024/09/10 18:19:46 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65 || str[i] > 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "Hello";
    char str3[] = "";

    // Test avec une chaîne contenant uniquement des majuscules
    printf("Test 1 (\"HELLO\"): %d\n", ft_str_is_uppercase(str1));  // Affiche 1

    // Test avec une chaîne contenant des minuscules
    printf("Test 2 (\"Hello\"): %d\n", ft_str_is_uppercase(str2));  // Affiche 0

    // Test avec une chaîne vide
    printf("Test 3 (\"\"): %d\n", ft_str_is_uppercase(str3));  // Affiche 1

    return 0;
}*/
