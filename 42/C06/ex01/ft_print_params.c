#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int a, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		while (av[i] != '\0')
		{
			ft_putchar(av[i]);
			av[i]++;
		}
		ft_putchar("\n");
		i++;
	}
}
