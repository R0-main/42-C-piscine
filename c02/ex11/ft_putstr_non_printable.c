/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:32:47 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/21 10:41:24 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_non_printable(char c)
{
	char	nl;

	if (c < 0)
		c = -c;
	nl = '\201'; 
	write(1, &nl, 1);
	write(1, &("0123456789ab"), 1);
	write(1, &("0123456789abcdef"[c % 16]), 1);
}

int	is_printable(char c)
{
	if (c < 32 || c >= 127)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (is_printable(str[i]))
			write(1, &str[i], 1);
		else
			print_non_printable(str[i]);
	}
}

#include <stdio.h>
int	main(void)
{
	char	*str = "Coucou\ntu vas bien ?";
	
	ft_putstr_non_printable(str);
}
