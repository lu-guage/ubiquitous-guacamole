/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:42:26 by lwang             #+#    #+#             */
/*   Updated: 2022/12/07 10:42:50 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c <= 127)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	int	output1;
	int output2;
	int	output3;
	char	teststr[]="ASDF\nG";
	char	teststr2[] = "!";
	char	teststr3[] = "";
	output1 = ft_str_is_printable(teststr);
	printf("%d",output1);
	output2 = ft_str_is_printable(teststr2);
	printf("%d", output2);
	output3 = ft_str_is_printable(teststr3);
	printf("%d", output3);
	return(0);
}
*/
