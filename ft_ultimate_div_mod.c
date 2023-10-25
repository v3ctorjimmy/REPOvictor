/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:02:52 by victor            #+#    #+#             */
/*   Updated: 2023/10/25 07:45:34 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a / *b;
        *b = *a % *b;
        *a = temp;
}
// int main(void)
// {
//     int a = 10;
//     int b = 2;
//     ft_ultimate_div_mod(&a, &b);
//     printf("division: %d\nmodulo: %d", a, b);
// }