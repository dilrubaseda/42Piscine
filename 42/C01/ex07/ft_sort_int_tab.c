#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	a;

	index = 0;
	while (index < size / 2)
	{
		a = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = a;
		index++;
	}
}
