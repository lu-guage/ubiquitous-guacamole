/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 09:53:59 by lwang             #+#    #+#             */
/*   Updated: 2022/12/15 14:17:26 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	i = 0;
	length = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc(length * sizeof(int));
	if (!(*range))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
#include<stdio.h>
int main()
{
	int *try = NULL;
	int **range = &try;
	printf("min is 6 max is 10 %d", ft_ultimate_range(range, 6, 10));
			return(0);
}
*/
