/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:29:35 by lwang             #+#    #+#             */
/*   Updated: 2022/12/14 20:45:26 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*home;
	int length;
	int i;
	
	i = 0;
	length = max - min;
	if (min > max)
		return (0);
	else
	{
		home = (int *) malloc(length * sizeof(int));
			if(home == NULL)
				return(NULL);
		while(min < max)
			{
				home[i] = min;
				i++;
				min++;
			}
			return(home);
	}
}

#include<stdio.h>
int main()
{
	int y;
	
	y = 0;
	int *x = ft_range(6,10);
	printf("min is 6 & max is 10\n");
	
	while( y < (10 - 6))
	{
		printf("%d", x[y]);
		y++;
	}
	return(0);
}

