/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:43:09 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/29 11:12:27 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*new_str;

	i = 0;
	src_len = ft_strlen(src);
	new_str = malloc(sizeof(char) * src_len + 1);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	*str = "fqfqfqffqfqfqf";
//	char	*new = ft_strdup(str);
//
//	printf("%s", new);
//	free(new);
//}
