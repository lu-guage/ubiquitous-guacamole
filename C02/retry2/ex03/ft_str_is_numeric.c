/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numberic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:36:36 by lwang             #+#    #+#             */
/*   Updated: 2022/12/07 10:37:14 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			c = str[i];
			if (c >= 48 && c <= 57)
				return (1);
			i++;
		}
		return (0);
	}
}
/*
int main()
{
	int	output1;
	int output2;
	int	output3;
	int output4;
	char	teststr[]="!...,";
	char	teststr2[] = "sd";
	char	teststr3[] = "";
	char	teststr4[] = "1243";
	output1 = ft_str_is_numeric(teststr);
	printf("%d",output1);
	output2 = ft_str_is_numeric(teststr2);
	printf("%d", output2);
	output3 = ft_str_is_numeric(teststr3);
	printf("%d", output3);
	output4 = ft_str_is_numeric(teststr4);
	printf("%d", output4);
	return(0);
}
*/
