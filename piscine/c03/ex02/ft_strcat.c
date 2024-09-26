/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:29:18 by soamara           #+#    #+#             */
/*   Updated: 2024/09/12 01:39:54 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src[128] = "hello";
	char dest[] = "world";
	printf("la chaine est %s",ft_strcat(src,dest));
}*/
