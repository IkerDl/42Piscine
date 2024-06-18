#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 2;	

	ft_div_mod(a, b, &div, &mod);
	//printf("a is: %d, \nb is: %d,\nthe div is: %d,\nthe mod is: %d.", a, b, div, mod)
	return(0);
}
