//#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int a_value;
	
	a_value = *a;
	*a = *a / *b;
	*b = a_value % *b;
}

int	main(void)
{
	int a;
	int b;
	
	a = 30;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	//printf("a:%d\nb:%d", a, b);
	return(0);
}
