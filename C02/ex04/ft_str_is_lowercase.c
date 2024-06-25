#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while(str[i] >= 'a' && str[i] <= 'z')
	{
		i++;	
	}
	if(str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

int	main(void)
{
	char	*str;
	int	result;
	
	str = "";
	result = ft_str_is_lowercase(str);
	printf("result with empty str is %d\n",result);
	str = "as";
	result = ft_str_is_lowercase(str);
	printf("result with as is %d\n",result);
        str = "As";
	result = ft_str_is_lowercase(str);
        printf("result with As is %d\n",result);
	str = "78";
	result = ft_str_is_lowercase(str);
        printf("result with 78 is %d\n",result);

	return (0);
}
