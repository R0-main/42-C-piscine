/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:05:48 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/27 19:43:52 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (0x0);
	i = min;
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0x0);
	while (i < max)
	{
		tab[(unsigned int)i - (unsigned int)min] = i;
		i++;
	}
	return (tab);
}

//#include <stdio.h>
//int	main(int n, char **argv)
//{
//	int	max;
//	int	min;
//
//	max = atoi(argv[2]);
//	min = atoi(argv[1]);
//	(void)n;
//	int	*tab = ft_range(min, max);
//
//	int i = 0;
//	while(i < max - min)
//	{
//		printf("%d, ", tab[i]);
//		i++;
//	}
//}
