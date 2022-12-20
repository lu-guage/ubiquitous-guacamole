/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:02:36 by lwang             #+#    #+#             */
/*   Updated: 2022/12/07 10:43:38 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
//#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 97 && c <= 122)
		{
			c = c -32;
			str[i] = c;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main ()
{
	char	*output1;
	char	*output2;
	char	*output3;
	char	teststr[]="abcvd";
	char	teststr2[] = "sd";
	char	teststr3[] = "";
	output1 = ft_strupcase(teststr);
	printf("%s",output1);
	output2 = ft_strupcase(teststr2);
	printf("%s", output2);
	output3 = ft_strupcase(teststr3);
	printf("%s", output3);
	return(0);
}
*/
