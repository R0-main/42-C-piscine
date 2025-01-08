/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:10:42 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/16 09:41:00 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_array_index(int tab[], int i, int j)
{
	int	temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < size / 2)
	{
		ft_swap_array_index(tab, i, size - i - 1);
	}
}

//#include <stdio.h>
//int	main(void)
//{
//	int	t[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//	int	i;
//
//	ft_rev_int_tab(t, 12);
//
//	i = 0;
//	while (i < 12)
//	{
//		printf("%d\n", t[i]);
//		i++;
//	}
//}
