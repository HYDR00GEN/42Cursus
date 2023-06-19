/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opaunas <opaunas@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:37:27 by opaunas           #+#    #+#             */
/*   Updated: 2023/06/19 18:37:27 by opaunas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_len(int n, int len)
{
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa_tmp(char *tmp, unsigned int nb, int len)
{
	if (nb == 0)
		tmp[0] = '0';
	while (nb / 10 || nb % 10)
	{
		tmp[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (tmp);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	int				sign;
	int				len;
	char			*tmp;

	sign = 0;
	len = 1;
	if (n < 0)
	{
		sign = 1;
		len++;
		nb = (unsigned int)(-n);
		n *= -1;
	}
	else
		nb = (unsigned int)n;
	len = ft_itoa_len(n, len);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	if (sign)
		tmp[0] = '-';
	tmp[len] = '\0';
	return (ft_itoa_tmp(tmp, nb, len));
}