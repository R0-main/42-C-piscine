/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <rguigneb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:13:43 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/29 18:21:17 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*new_str;

	i = 0;
	src_len = ft_strlen(src);
	new_str = malloc(sizeof(char) * src_len + 1);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stocks;

	i = 0;
	stocks = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		stocks[i].size = ft_strlen(av[i]);
		stocks[i].str = av[i];
		stocks[i].copy = ft_strdup(av[i]);
		i++;
	}
	stocks[i].str = 0;
	return (stocks);
}

//#include <stdio.h>
//
//int	main(int argc, char **argv)
//{
//	t_stock_str *tab = ft_strs_to_tab(argc, argv);
//	int		i;
//
//	i = 0;
//	while (tab[i].str != 0)
//	{
//		printf("text : %s | cpy : %s |
//		 size : %d\n", tab[i].str, tab[i].copy, tab[i].size);
//		i ++;
//	}
//	free(tab);
//}
