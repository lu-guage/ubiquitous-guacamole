/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:27:43 by lwang             #+#    #+#             */
/*   Updated: 2022/12/15 09:51:30 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlength(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcopy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src [i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*newstring;

	length = ft_strlength(src);
	newstring = (char *)malloc((length + 1) * sizeof(char));
	ft_strcopy(newstring, src);
	return (newstring);
}
/*
char	*ft_strdup(char *src)
{
	int	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(src));
	while(src[i] !='\0')
	{
		str[i] = src [i];
		i++;
	}
	str[i] = '\0';
	return(str);

#include<unistd.h>
#include<stdio.h>
int main()
{
	char src[] = "Hello, this is computer";
	printf("newstring is %s", ft_strdup(src));
	return(0);
}
*/
