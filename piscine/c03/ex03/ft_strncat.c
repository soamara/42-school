/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 01:41:06 by soamara           #+#    #+#             */
/*   Updated: 2024/09/12 20:19:38 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char dest[20] = "Hello"; // Taille suffisante pour contenir la concaténation
    char src[] = "World";
    
    // Concaténation de src dans dest avec un maximum de 3 caractères
    printf("Avant concaténation : %s\n", dest);
    ft_strncat(dest, src, 3);
    printf("Après concaténation (3 caractères) : %s\n", dest);

    return 0;
}*/
