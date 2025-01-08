/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:40:07 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/21 10:08:21 by rguigneb         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;

	d = ft_strlen(src);
	i = -1;
	if (!src)
		return (0);
	if (size == 0)
		return (d);
	while (++i < size - 1)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (d);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	str[10] = "123456789f";
//	char	dest[10];
//	printf("%d\n", ft_strlcpy(dest, str, 10));
//	printf("%s", dest);
//
//}
