/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:25:42 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/19 16:04:03 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_array_index(int tab[], int i, int j)
{
	int	temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int 	i;
	
	i = 0;
	while(i < size - 1)
	{
		j = 0;

		while (j < size - 1)
		{	
		if (tab[j] > tab[j + 1])
			ft_swap_array_index(tab, j + 1, j);
		j++;
		}
	i++;
	}
}

#include <stdio.h>
int   main(void)
{
      int     t[14] = {2, 2, 5, 3, 4, -3, 6, 9, 90, -2, 0, 1, 1, 2};
      int     i;

      ft_sort_int_tab(t, 14);

      i = 0;
      while (i < 14)
      {
              printf("%d,", t[i]);
              i++;
      }
}
