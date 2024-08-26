/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:33:10 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/09 21:24:07 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*position;

	position = NULL;
	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			position = ((char *)s);
		s++;
	}
	if (c == '\0')
		position = ((char *)s);
	return (position);
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
