/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:30:44 by lwang             #+#    #+#             */
/*   Updated: 2022/12/15 19:13:40 by lwang            ###   ########.fr       */
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
	}s
	dest[i] = '\0';
	return (dest);
}

int	*ft_length(int size, char **strs, char *sep)
{
	int length;
	int i;

	i = size;
	length = 0;
	while (i > 0)
	{
		length = length + ft_strlength(strs);
		i--;
	}
	while (i - 1 > 0)
	{
		length = length + ft_strlength(sep);
		i--;
	}
	return(length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char *strs,char *sep)
{
	int		lenfornew;
	char	*newstring;
	int		i;
	int		j;
	int		k;

	lenfornew = ft_length(size, strs,sep);
	newstring = (char *)malloc (length * sizeof(char));

	while (i < size)
		{
			j = 0;
			while (strs[i][j] != '\0')
			{
				newstring[k++] = strs[i][j++];
			}
			j = 0;
			while (sep[j] != '\0' && i != size -1)
			{
				newstring[k++] = sep[j++];
			}
			i++;
		}
	newstring[k] = '\0';
	return(newstring);
}

#include<stdio.h>
int main(void)
{
	char	*strs[4];
	strs[0] = "Hello";
	strs[1] = "world";
	strs[2] = "thisis";
	strs[3] = "computer";
	printf("%s", ft_strjoin(4, strs, "_"));
	return(0);
}

