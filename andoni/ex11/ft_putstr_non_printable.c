/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arios-he <arios-he@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:56:46 by arios-he          #+#    #+#             */
/*   Updated: 2023/10/25 11:55:47 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(*str) / 16];
			hex[2] = "0123456789abcdef"[(*str) % 16];
			write(1, hex, 3);
		}
		str++;
	}
}

int main() {
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    return 0;
}
