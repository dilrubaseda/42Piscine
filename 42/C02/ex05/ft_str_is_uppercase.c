#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || 90 < str[i])
			return (0);
		i++;
	}
	return (1);
}
