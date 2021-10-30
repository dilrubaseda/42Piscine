#include <unistd.h>

int	ft_iterative_factoirla(int nb)
{
	int	fact;
	int	i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	fact = 1;
	i = 0;
	while (i++ < nb)
		fact = fact * i;
	return (fact);
}
