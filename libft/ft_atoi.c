/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 23:51:12 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/10 17:31:31 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	write_num(char *str, int sign)
{
	long long	res;
	int			count;
	int			checker;

	res = 0;
	count = 0;
	checker = 0;
	while (*str > 47 && *str < 58)
	{
		(*str != '0') ? checker = 1 : checker;
		(checker == 1) ? count++ : count;
		if ((count > 19 || (res == 922337203685477580 && *str >= '7'))\
			&& sign == 1)
			return (-1);
		else if ((count > 19 || (res == 922337203685477580 && *str >= '8'))\
			&& sign == -1)
			return (0);
		res = res * 10 + (*str++ - '0');
	}
	return ((int)res * sign);
}

int			ft_atoi(char *str)
{
	int			sign;

	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	(*str == '-') ? sign = -1 : sign;
	(*str == '-' || *str == '+') ? str++ : str;
	return (write_num(str, sign));
}
