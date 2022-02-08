/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalenci <jvalenci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:04:52 by jvalenci          #+#    #+#             */
/*   Updated: 2022/02/08 09:32:49 by jvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || \
			c == ' ')
		return (1);
	return (0);
}

int ft_int_overflow(int xvalue, int yvalue, char operation)
{
	int over_flow;

    if (operation == 'a')
        over_flow = xvalue + yvalue;
    if (operation == 'm')
        over_flow = xvalue * yvalue;
    if (xvalue > 0 && yvalue > 0 && over_flow < 0)
        return (0);
    if (xvalue < 0 && yvalue < 0 && over_flow > 0)
        return (0);
    return (1);
}

int ft_check_sign(int *mul, int *sym, int *i, const char *str)
{
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*mul *= -1;
		if (*sym++ > 0)
			return (0);
		*i += 1;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sym;
	int	mul;
	int	num;

	i = 0;
	sym = 0;
	mul = 1;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	if (!ft_check_sign(&mul, &sym, &i, str))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (!ft_int_overflow(num, 10, 'm'))
			return (0);
		num *= 10;
		if (!ft_int_overflow(num, ((int)str[i] - '0'), 'a'))
			return (0);
		num += ((int)str[i++] - '0');
	}
	return (num * mul);
}
/* int main()
{
	printf(("ft_atoi test\n"));
	printf(("test1: "));
	printf(("\\t\\v\\f' '' '+234234234\n"));
	printf(("function call: "));
	printf(("%d\n"), ft_atoi("\t\v\f  +234234234"));
	printf(("------------------------------\n"));
	printf(("test2: "));
	printf(("lkfjsldkf34234234\n"));
	printf(("function call: "));
	printf(("%d\n"), ft_atoi("lkfjsldkf34234234"));
	printf(("------------------------------\n"));
	printf(("test3: "));
	printf(("2147483648\n"));
	printf(("function call: "));
	printf(("%d\n"), ft_atoi("2147483648"));
	printf(("------------------------------\n"));
	printf(("test4: "));
	printf(("-2147483649\n"));
	printf(("function call: "));
	printf(("%d\n"), ft_atoi("-2147483649"));
	printf(("------------------------------\n"));
	printf(("test5: "));
	printf(("-\\t\\r\\f214748364\n"));
	printf(("function call: "));
	printf(("%d\n"), ft_atoi("-\t\r\f214748364"));
	printf(("------------------------------\n"));
	printf(("test6: "));
	printf(("-2147483\n"));
	printf(("function call: "));
	printf(("%d\n"), ft_atoi("-2147483"));
	printf(("------------------------------\n"));
	printf(("test7: "));
	printf(("-2147483323423423\n"));
	printf(("function call: "));
	printf(("%d\n"), ft_atoi("-2147483323423423"));
}
 */