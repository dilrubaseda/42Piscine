int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && c < n)
	{
		if (s1[c] != s2[c])
		{
			break ;
		}
		c++;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
