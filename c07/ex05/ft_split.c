/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <rguigneb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:48:48 by rguigneb          #+#    #+#             */
/*   Updated: 2024/09/02 11:56:09 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_get_next_index(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset))
			return (i);
		i++;
	}
	return (i);
}

int	get_tab_len(char *str, char *charset)
{
	int	i;
	int	count;
	int	w;

	i = 0;
	w = 0;
	count = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset))
		{
			str += i + 1;
			w = 1;
			i = 0;
		}
		else if (i == 0 || w == 1)
		{
			i++;
			w = 0;
			count++;
		}
		else
			i++;
	}
	return (count);
}

char	*handle_current_state(char **str, int len)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	while (str && i < len)
	{
		dest[i] = (*str)[i];
		i++;
	}
	dest[i] = '\0';
	(*str) += len;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**result;
	int		len;
	int		d;
	int		total;

	d = 0;
	i = 0;
	while (str[d])
		d++;
	total = get_tab_len(str, charset);
	result = malloc(sizeof(char *) * total + 1);
	if (!result)
		return (0);
	while (i < total)
	{
		len = ft_get_next_index(str, charset);
		if (len == 0)
			str += 1;
		else
			result[i++] = handle_current_state(&str, len);
	}
	str -= d;
	result[i] = 0;
	return (result);
}

//#include <stdio.h>
//
//int	main(int argc, char **argv)
//{
//	char **tab = ft_split(argv[1], argv[2]);
//	int	i;
//
//	(void)argc;
//	i = 0;
//	while (tab[i] != 0)
//	{
//		printf("%s\n", tab[i++]);
//	}
//}
