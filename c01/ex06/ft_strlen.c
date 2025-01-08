/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:53:43 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/16 09:45:17 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
	}
	return (i);
}

//int	main(void)
//{
//	char *str = "Chaine";
//	int	i;
//
//	i = ft_strlen(str);
//	
//	printf("%d", i);
//
//}
