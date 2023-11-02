/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vidiaz <vidiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:19:26 by vidiaz            #+#    #+#             */
/*   Updated: 2023/10/26 15:41:45 by vidiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
// 	int divi;
// 	int mod;
// 	int a = 20;
// 	int b = 2;

// 	ft_div_mod(a, b, &divi, &mod);
// 	printf("divi:%d resto: %d", divi, mod);
// }