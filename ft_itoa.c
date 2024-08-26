/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin4 <mmartin4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:24:46 by mmartin4          #+#    #+#             */
/*   Updated: 2024/05/29 18:43:01 by mmartin4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int	nlen;

	nlen = 0;
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
	str = (char *)malloc((len + 1) * sizeof(char));
	nbr = n;
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
		str[0] = '0';
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
