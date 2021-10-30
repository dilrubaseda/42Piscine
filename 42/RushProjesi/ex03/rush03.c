#include <unistd.h>

void	ft_putchar(char c);

void	printvh(int v, int h, int x, int y)
{
	if ((v == 1 && h == y) || (v == 1 && h == 1))
	{
		ft_putchar('A');
	}
	else if ((v == x && h == y) || (v == x && h == 1))
	{
		ft_putchar('C');
	}
	else if (v == 1 || h == 1 || v == x || h == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush03(int x, int y)
{
	int	vertical;
	int	horizontal;

	vertical = 1;
	horizontal = 1;
	while (horizontal <= y)
	{
		while (vertical <= x)
		{
			printvh(vertical, horizontal, x, y);
			vertical++;
		}
		horizontal++;
		ft_putchar('\n');
		vertical = 1;
	}
}
