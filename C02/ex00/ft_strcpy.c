/*
#include <unistd.h>
#include <stdio.h> */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	*src;
	char	dest[6];
	
	src = "Hello";
	ft_strcpy(dest, src);
	printf("The src value is: %s \nThe value of dest is: %s", src, dest);
	return	(0);
}*/
