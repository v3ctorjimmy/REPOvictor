/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vidiaz <vidiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:24:25 by vidiaz            #+#    #+#             */
/*   Updated: 2023/11/01 10:14:55 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main(void)
// {
// 	char	*str= "holas";

// 	int	total = ft_strlen(&str);

// 	printf("%d", total);

// 	return(0);

// }
