/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:23:02 by victor            #+#    #+#             */
/*   Updated: 2023/10/25 20:57:07 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i]!= '\0')
    {
        i++;
    }
   return(i);
}
// int main(void)
// {
//     char *str = "123";
//     int total = ft_strlen(str);
//     printf("valor: %d", total);
//     return(0);
// }