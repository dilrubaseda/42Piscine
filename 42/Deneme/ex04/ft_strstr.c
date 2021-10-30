#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		l = 0;
		while (str[i + l] == to_find[l])
		{
			l++;
			if (to_find[l] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
