
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while(s1[i] == s2[i] !='\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
*/
int	main()
{
	printf("%d", ft_strcmp("Hello", "hello"));
	return (0);
}*/
