/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:03:42 by lwang             #+#    #+#             */
/*   Updated: 2022/12/07 10:44:27 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
	c = str[i];
		if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
			return (0);
	i++;
	}
	return (1);
}
/*
int main ()
{
	int	output1;
	int output2;
	int	output3;
	char	teststr[]="jashjkdahkj1";
	char	teststr2[] = "sd";
	char	teststr3[] = "";
	output1 = ft_str_is_alpha(teststr);
	printf("%d",output1);
	output2 = ft_str_is_alpha(teststr2);
	printf("%d", output2);
	output3 = ft_str_is_alpha(teststr3);
	printf("%d", output3);
	return(0);
}
*/
