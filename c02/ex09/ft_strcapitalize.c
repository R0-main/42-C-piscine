/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:13:13 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/18 14:51:00 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_alpha_with_maj(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (
			is_alpha(str[i])
			&& is_alpha_with_maj(str[i - 1]) != 1
			&& is_num(str[i - 1]) != 1
		)
			str[i] -= 32;
		i++;
	}
	return (str);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	str[61] = "salut, comment tu vaA ?
//	42mots quarante-deux; cinquante+et+un";
//
//	ft_strcapitalize(str);
//	
//	printf("%s", str);
//}
