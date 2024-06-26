
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int main()
{
	char *t;

	char a[20] = "hola";
	char b[20] = "adios";

	t = ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}

