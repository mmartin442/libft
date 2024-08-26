/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:55:51 by mmartin4          #+#    #+#             */
/*   Updated: 2024/08/26 13:28:27 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
int main(void)
{
	char s1[] = "333a";
	char s2[] = "3333";
	printf("%d",ft_memcmp(s1, s2, 5));
}

DESCRIPTION
The  memcmp()  function compares the first n bytes (each interpreted 
as unsigned char of the memory areas s1 and s2.
RETURN VALUE
It returns an integer less than, equal to, or greater than zero
if the first n bytes of s1 is found, respectively, to be less than, 
to match, or be grater than the first n bytes of s2.
For a nonzero return value, the sign is determined by 
the sign of the difference between the first pair of bytes 
(interpreted as unsigned char) that differ in s1 and s2.
*/
