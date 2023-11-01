/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:50:39 by arios-he          #+#    #+#             */
/*   Updated: 2023/10/25 11:48:08 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		*str = *str - 32;
		str++;
	}
	return (str);
}

int main()
{
	char str[10] = "abdc";
	ft_strupcase(str);
	printf("Resultado es %s", str);
	return (0);
}
