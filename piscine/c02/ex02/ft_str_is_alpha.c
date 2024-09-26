/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:08:47 by soamara           #+#    #+#             */
/*   Updated: 2024/09/10 18:43:35 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "";
    char str4[] = "OnlyLetters";
    char str5[] = "With Space";

    // Test avec une chaîne contenant uniquement des lettres alphabétiques
    printf("Test 1 (\"HelloWorld\"): %d\n", ft_str_is_alpha(str1));  // Affiche 1

    // Test avec une chaîne contenant des lettres et des chiffres
    printf("Test 2 (\"Hello123\"): %d\n", ft_str_is_alpha(str2));  // Affiche 0

    // Test avec une chaîne vide
    printf("Test 3 (\"\"): %d\n", ft_str_is_alpha(str3));  // Affiche 1

    // Test avec une autre chaîne contenant uniquement des lettres alphabétiques
    printf("Test 4 (\"OnlyLeters\"): %d\n", ft_str_is_alpha(str4));  // Affiche 1

    // Test avec une chaîne contenant des lettres et un espace
    printf("Test 5 (\"With Space\"): %d\n", ft_str_is_alpha(str5));  // Affiche 0

    return 0;
}
*/
