/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:36:07 by mmartin4          #+#    #+#             */
/*   Updated: 2024/08/26 16:50:09 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcount(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str[i])
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

void	ft_splitstr(char **finalstr, const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			finalstr[k++] = ft_substr(s, i, j - i);
			i = j;
		}
	}
	finalstr[k] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		strcount;

	if (!s)
		return (NULL);
	strcount = ft_strcount((char *)s, c);
	array = malloc(sizeof(char *) * (strcount + 1));
	if (!array)
		return (NULL);
	return (array);
}
/*
int main()
{
    char **split_str;
    char str[] = "hello,world,foo,bar";
    char c = ',';

    split_str = ft_split(str, c);

    if (split_str)
    {
        int i = 0;
        while (split_str[i])
        {
            printf("Split string %d: %s\n", i, split_str[i]);
            i++;
        }
    }

    return 0;
}
*/
