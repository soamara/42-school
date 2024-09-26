/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 01:53:37 by soamara           #+#    #+#             */
/*   Updated: 2024/09/10 18:25:25 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char src[] = "Hello, world!";
    char dest[50];

    ft_strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}*/
