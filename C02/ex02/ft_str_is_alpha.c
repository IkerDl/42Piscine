
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
*/
int	main(void)
{
	char *str;	
	int	result;
	str = "Hola";

	result = ft_str_is_alpha(str);
	printf("Result is %d\n", result);
	return (0);
}*/
