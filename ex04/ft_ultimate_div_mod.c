/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagenin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:06:43 by lagenin           #+#    #+#             */
/*   Updated: 2025/09/19 13:39:43 by lagenin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	box;

	box = *a;
	*a = *a / *b;
	*b = box % *b;
}
/*
int	main()
{
	int a = 50;
	int b = 6;
	int *ao = &a;
	int *bo = &b;

	ft_ultimate_div_mod(ao, bo);
	printf("%d %d", a, b);
	return (0);
}
*/
