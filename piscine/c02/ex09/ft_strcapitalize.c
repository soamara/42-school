/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:40:53 by soamara           #+#    #+#             */
/*   Updated: 2024/09/25 23:35:53 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	start_word;

	a = 0;
	start_word = 1;
	ft_lowercase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (start_word == 1)
				str[a] -= 32;
			start_word = 0;
		}
		else if (str[a] >= '0' && str[a] <= '9')
			start_word = 0;
		else
			start_word = 1;
		a++;
	}
	return (str);
}

#include <stdio.h>
#include <unistd.h>

char	*ft_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	start_word;

	a = 0;
	start_word = 1;
	ft_lowercase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (start_word == 1)
				str[a] -= 32;
			start_word = 0;
		}
		else if (str[a] >= '0' && str[a] <= '9')
			start_word = 0;
		else
			start_word = 1;
		a++;
	}
	return (str);
}





int		main()
{
	char c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	ft_putstr(ft_strcapitalize(c));
	ft_putstr(":");
	ft_putstr(c);
}
