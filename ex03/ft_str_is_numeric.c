#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int str_numeric;
	int i;

	str_numeric = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			str_numeric = 0;
		}
		i++;
	}
	return (str_numeric);
}

int main(void)
{
          printf("%d", ft_str_is_numeric("9"));
          return (0);
}