#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[l] != '\0')
		l++;
	while (i < nb && src[i] != '\0')
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
