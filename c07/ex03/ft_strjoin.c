/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <rguigneb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:54:33 by rguigneb          #+#    #+#             */
/*   Updated: 2024/09/05 15:56:22 by rguigneb         ###   ########.fr       */
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

int	get_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		total += ft_strlen(sep);
		i++;
	}
	total -= ft_strlen(sep);
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	int		total;

	i = 0;
	total = get_total_length(size, strs, sep);
	result = malloc(sizeof(char) * total + 1);
	if (result == NULL)
		return (NULL);
	if (size <= 0)
		return (malloc(1));
	result[0] = 0;
	while (i < size - 1)
	{
		result = ft_strcat(result, strs[i]);
		result = ft_strcat(result, sep);
		i++;
	}
	result = ft_strcat(result, strs[i]);
	return (result);

}

//#include <stdio.h>
//
//int	main(int argc, char **argv)
//{
//	(void)argv;
//	(void)argc;
//	//char *separator = "===";
//	char	*t[1] = {"sowfow"};
//	char	*str = ft_strjoin(-1, t, "/");
//	printf("%s", str);
//	free(str);
//}
