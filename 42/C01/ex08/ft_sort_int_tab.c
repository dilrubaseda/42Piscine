#include <unistd.h>

voi	dft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	j;
	int	temp;

	index = 0;
	while (index != size - 1)
	{
		j = 0;
		while (j != size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		index++;
	}
}
