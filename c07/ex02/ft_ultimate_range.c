/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:16:44 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/31 09:59:19 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	*range = malloc(sizeof(int) * (max - min));
	if (*range == 0)
	{
		*range = NULL;
		return (-1);
	}
	while (i < max)
	{
		(*range)[(unsigned int)i - (unsigned int)min] = i;
		i++;
	}
	return (max - min);
}

//#include <stdio.h>
//int	main(int argc, char **argv)
//{
//	int	*range;
//	int	i;
//
//	ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
//	i = 0;
//	while(i < 10)
//	{	
//		printf("%d", range[i]);
//		i++;
//	}
//}
