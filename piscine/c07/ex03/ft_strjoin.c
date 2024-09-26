/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 04:50:22 by soamara           #+#    #+#             */
/*   Updated: 2024/09/25 21:01:33 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	taille_chaine(char **strs, char *sep, int size)
{
	int	taille;
	int	i;

	taille = 0;
	i = 0;
	while (i < size)
	{
		taille = taille + ft_strlen(strs[i]);
		i++;
	}
	return (taille + (size - 1 * ft_strlen(sep)));
}

char	*ft_check_str(void)
{
	char	*res;

	res = (char *)malloc(1);
	res[0] = '\0';
	return (res);
}

void	ft_strjoinbis(int size, char **strs, char *sep, char **res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			(*res)[k] = strs[i][j];
			j++;
		}
		if (i < size - 1)
		{
			j = -1;
			while (sep[++j])
				(*res)[k++] = sep[j];
		}
		i++;
	}
	(*res)[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lentotal;
	char	*res;

	lentotal = taille_chaine(strs, sep, size);
	if (size <= 0)
		return (ft_check_str());
	res = (char *)malloc((lentotal + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strjoinbis(size, strs, sep, &res);
	return (res);
}
