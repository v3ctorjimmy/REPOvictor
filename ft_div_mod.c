/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:25:14 by victor            #+#    #+#             */
/*   Updated: 2023/10/24 22:10:34 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod (int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;

}
// int main(void)
// {
//     int division;
//     int modulo;
//     int a = 10;
//     int b = 2;

//     ft_div_mod(a, b, &division, &modulo);
//     printf("Division: %d, Module: %d", division, modulo);
// }