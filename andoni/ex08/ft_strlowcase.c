/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:19:46 by arios-he          #+#    #+#             */
/*   Updated: 2023/10/25 11:49:08 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	return (str);
}

int main()
{
	char str[10] = "ANCD";
	ft_strlowcase(str);
	printf("El resultado es %s", str);
	return (0);
}

