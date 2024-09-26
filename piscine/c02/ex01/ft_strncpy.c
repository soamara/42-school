/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 02:39:48 by soamara           #+#    #+#             */
/*   Updated: 2024/09/09 17:42:35 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];  // Déclarer un buffer suffisamment grand pour la destination

    // Test 1: Copier les 5 premiers caractères
    ft_strncpy(dest, src, 5);
    printf("Source: %s\n", src);
    printf("Destination après strncpy (5 caractères) : %s\n", dest);

    // Test 2: Copier la totalité de la chaîne, plus remplissage
    ft_strncpy(dest, src, 20);
    printf("Destination après strncpy (20 caractères) : %s\n", dest);

    return 0;
}
*/
