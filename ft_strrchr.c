/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:33:10 by mmartin4          #+#    #+#             */
/*   Updated: 2024/08/26 17:58:41 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	
	str = (char *)s;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
/*
int	main (void)
{
	const char *s = "Egun on";
	int c = '8';
	char *result = ft_strrchr(s, c);

	if (result == NULL)
		printf("Character '%c' not found in string.\n", c);
	else
		printf("Character '%c' found in string.\n", c);
}
*/
