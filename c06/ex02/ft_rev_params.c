/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:11:44 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/22 11:23:59 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		write(1, &str[i], 1);
	}
}

int	main(int argn, char **argv)
{
	if (argn <= 1)
		return (0x0);
	while (argn > 1)
	{
		ft_putstr(argv[--argn]);
		write(1, &("\n"), 1);
	}
}
