#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (a == 0 && str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= 32;
			a++;
		}
		else if (a > 0 && str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A' )
			|| (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			a = 0;
		else
			a++;
		i++;
	}
	return (str);
}
