/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 23:51:12 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/04 16:24:40 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	write_num(char *str, int sign, int res)
{
	int	check_max;

	check_max = 0;
	while (*str > 47 && *str < 58)
	{
		if (*str == '9')
			check_max++;
		res = res * 10 + (*str++ - '0');
	}
	if (check_max >= 26 && res * sign == -469762049)
		return (-1);
	else if (check_max >= 26 && res * sign == 469762049)
		return (0);
	return (res * sign);
}

int			ft_atoi(char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'\
			|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	(*str == '+') ? str++ : str;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	res = write_num(str, sign, res);
	return (res);
}
