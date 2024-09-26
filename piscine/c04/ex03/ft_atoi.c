/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 01:28:56 by soamara           #+#    #+#             */
/*   Updated: 2024/09/17 15:10:22 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

// Déclaration de la fonction ft_atoi
int ft_atoi(char *str);

int main() {
    // Test de la fonction avec différentes chaînes
    char test1[] = "   +1234";   // Test avec un nombre positif avec espaces
    char test2[] = "  -5678";    // Test avec un nombre négatif avec espaces
    char test3[] = "00042";      // Test avec des zéros en tête
    char test4[] = "   +0";      // Test avec zéro
    char test5[] = "   -00123";  // Test avec un nbr négatif avc des zéro 
    char test6[] = "abc";       // Test avec une chaîne non numérique
    char test7[] = "";          // Test avec une chaîne vide

    // Affichage des résultats
    printf("Test 1: \"%s\" -> %d\n", test1, ft_atoi(test1));
    printf("Test 2: \"%s\" -> %d\n", test2, ft_atoi(test2));
    printf("Test 3: \"%s\" -> %d\n", test3, ft_atoi(test3));
    printf("Test 4: \"%s\" -> %d\n", test4, ft_atoi(test4));
    printf("Test 5: \"%s\" -> %d\n", test5, ft_atoi(test5));
    printf("Test 6: \"%s\" -> %d\n", test6, ft_atoi(test6));
    printf("Test 7: \"%s\" -> %d\n", test7, ft_atoi(test7));

    return 0;
}*/
