/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:11:44 by rguigneb          #+#    #+#             */
/*   Updated: 2024/09/04 13:40:25 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (!*str)
		return ;
	while (str[++i] != '\0')
	{
		write(1, &str[i], 1);
	}
	write(1, &("\n"), 1);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	main(int argn, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argn)
	{
		j = 0;
		while (++j < argn - 1)
		{	
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				swap(&argv[j + 1], &argv[j]);
			}
		}
		i++;
	}
	i = 1;
	while (i < argn)
	{
		ft_putstr(argv[i++]);
	}
}
