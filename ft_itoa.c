/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:24:46 by mmartin4          #+#    #+#             */
/*   Updated: 2024/08/30 13:53:43 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int	nlen;

	nlen = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		nlen++;
	while (n != 0)
	{
		n /= 10;
		nlen++;
	}
	return (nlen);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nbr;

	len = ft_nlen(n);
	nbr = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	str[len--] = '\0';
	while (nbr > 0)
	{
		str[len] = (nbr % 10) + '0';
		len--;
		nbr /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	int n;
	
	n = -123;
	printf("%s", ft_itoa(n));
}
*/
