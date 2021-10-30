#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 2;
	write(1, "00 01", 5);
	while (98 >= a)
	{
		while (99 >= b)
		{
			ft_putchar(',');
			ft_putchar(' ');
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			b++;
		}
		a++;
		b = a + 1;
	}
}
