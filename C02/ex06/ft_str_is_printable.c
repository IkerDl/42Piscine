#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

        i = 0;
        while(str[i] >= 33 && str[i] <= 126)
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

int     main(void)
{
        char    *str;
        int     result;

        str = "";
        result = ft_str_is_printable(str);
        printf("result with empty str is %d\n",result);
        str = "as";
        result = ft_str_is_printable(str);
        printf("result with as is %d\n",result);
        str = "A";
        result = ft_str_is_printable(str);
        printf("result with A is %d\n",result);
        str = "78";
        result = ft_str_is_printable(str);
        printf("result with 78 is %d\n",result);

        return (0);
}
