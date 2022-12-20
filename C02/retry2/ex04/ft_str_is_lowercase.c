/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:51:42 by lwang             #+#    #+#             */
/*   Updated: 2022/12/07 10:40:49 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lowercase&empty,return 1
#include<unistd.h>

int	ft_str_is_lowercase(char *str)
{
	char	c;
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			c = str[i];
			if (c >= 97 && c <= 122)
				return (1);
		i++;
		}
		return (0);
	}
}
/*
#include<stdio.h>
int main ()
{
	int	output1;
	int output2;
	int	output3;
	char	teststr[]="09203AA8";
	char	teststr2[] = "sd";
	char	teststr3[] = "";
	output1 = ft_str_is_lowercase(teststr);
	printf("%d",output1);
	output2 = ft_str_is_lowercase(teststr2);
	printf("%d", output2);
	output3 = ft_str_is_lowercase(teststr3);
	printf("%d", output3);
	return(0);
}
*/
