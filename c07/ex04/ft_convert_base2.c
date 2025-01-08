/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <rguigneb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:49:05 by rguigneb          #+#    #+#             */
/*   Updated: 2024/09/04 10:35:14 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	base_length;

	i = 0;
	base_length = ft_strlen(base);
	if (!base || base_length <= 1)
		return (-1);
	while (base[i])
	{
		j = -1;
		if (
			base[i] == '+'
			|| base[i] == '-'
			|| base[i] <= 32
			|| base[i] >= 127
		)
			return (-1);
		while (base[++j])
			if (i != j && base[j] == base[i])
				return (-1);
		i++;
	}
	return (base_length);
}

int	ft_find_index(char *base, char c)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == c)
			return (i);
	}
	return (-1);
}

int	correspond_to_the_base(char *str, char *base)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (
			str[i] == '-'
			|| (str[i] >= 9 && str[i] <= 13)
			|| str[i] == '+'
			|| str[i] == ' '
		)
			continue ;
		if (ft_find_index(base, str[i]) == -1)
			return (0);
	}
	return (1);
}
