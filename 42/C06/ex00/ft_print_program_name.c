#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 2)
	{
		i = 0;
		while (av[0][i])
		{
			ft_putchar(av[0][i]);
			i++;
		}
	}
	return (0);
}
