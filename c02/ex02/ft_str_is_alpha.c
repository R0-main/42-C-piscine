/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:29:29 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/16 11:54:46 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (
			!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
		)
			return (0);
	}
	return (1);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	*str = "prhaseestfWFFQKFQJFQF";
//	char	*str2 = "prhase de test second";
//	char	*str3 = "";
//
//	printf("%d\n", ft_str_is_alpha(str));
//	printf("%d\n", ft_str_is_alpha(str2));
//	printf("%d\n", ft_str_is_alpha(str3));
//}
