#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (dest[i] != '\0')
		i++;
	while (src[t] != '\0')
	{
		dest[i] = src[t];
		t++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
