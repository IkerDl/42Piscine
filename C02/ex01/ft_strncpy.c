#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	
	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[9] = "Something";
	char	dest[9];

	ft_strncpy(dest, src, 8);
	printf("Dest value is: %s\n",dest);
	return (0);
}
