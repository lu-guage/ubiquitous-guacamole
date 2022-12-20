/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:10:26 by lwang             #+#    #+#             */
/*   Updated: 2022/12/07 10:41:41 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (str [i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			c = str[i];
			if (c >= 65 && c <= 90)
				return (1);
			i++;
		}
		return (0);
	}
}
/*
int main ()
{
	int	output1;
	int output2;
	int	output3;
	char	teststr[]="ASDFG";
	char	teststr2[] = "sd";
	char	teststr3[] = "";
	output1 = ft_str_is_uppercase(teststr);
	printf("%d",output1);
	output2 = ft_str_is_uppercase(teststr2);
	printf("%d", output2);
	output3 = ft_str_is_uppercase(teststr3);
	printf("%d", output3);
	return(0);
}
*/
