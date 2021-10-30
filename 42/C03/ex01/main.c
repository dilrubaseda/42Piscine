#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *str1;
	char *str2;

	str1 = "";
	str2 = "dsa";
	//str1[0] = '\200';
	//str2[0] = '\0';
	//str1[1] = '\0';
	//str2[1] = '\0';
	printf("c  : %d\n", strncmp(str1, str2, 3));
	printf("ft : %d\n", ft_strncmp(str1, str2, 3));
}
