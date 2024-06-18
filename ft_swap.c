#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int a_value = *a;
	int b_value = *b;
	*a = b_value;
	*b = a_value;
}

int	main(void)
{
	int a;
	int b;
	
	a = 20;
	b = 10;

	ft_swap(&a, &b);
	return(0);
}
