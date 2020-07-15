/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsnape <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:12:31 by tsnape            #+#    #+#             */
/*   Updated: 2020/07/15 12:13:19 by tsnape           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	"ft_putchar.c"

int		rush(int a, int b)
{	
	char c, d, e, f;
	c = 'o';
	d = '-';
	e = '|';
	f = ' ';
	int t;
	t = 1;
	int t2;
	t2 = 1;
	
	while (a > 0)
	{
		if (a == 1 || t > 0 )
		{
			ft_putchar(c);
			a--;
			t--;
		}
		else if (a > 1  || a < a - t2 )
		{
			ft_putchar(d);
			a--;
			t2--;
		}
	}
	while (b > 1 )
	{
		if (b == 1)
		{
			ft_putchar('\n');
			ft_putchar(e);
			b--;
		}
	}

	return	(0);
}
