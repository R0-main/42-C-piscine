/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:00:45 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/22 11:08:46 by rguigneb         ###   ########.fr       */
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
	int	i;

	i = 1;
	if (argn <= 1)
		return (0x0);
	while (argv[i])
	{
		ft_putstr(argv[i++]);
		write(1, &("\n"), 1);
	}
}
