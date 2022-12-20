/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:27:12 by lwang             #+#    #+#             */
/*   Updated: 2022/12/07 10:43:55 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 65 && c <= 90)
		{
			c = c + 32;
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
	char	teststr[]="ABCD";
	char	teststr2[] = "sd";
	char	teststr3[] = "";
	output1 = ft_strlowcase(teststr);
	printf("%s",output1);
	output2 = ft_strlowcase(teststr2);
	printf("%s", output2);
	output3 = ft_strlowcase(teststr3);
	printf("%s", output3);
	return(0);
}
*/
