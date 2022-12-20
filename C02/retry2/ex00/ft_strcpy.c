/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:58:59 by lwang             #+#    #+#             */
/*   Updated: 2022/12/07 10:48:26 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
 #include<stdio.h>
int	main()
{
	char str1[] = "Hello!";
	char str2[] = "Hi!";
	char *x;	

	x = ft_strcpy(str1, str2);
	printf("%s",x);
	return(0);
}
*/
