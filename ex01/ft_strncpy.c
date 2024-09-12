#include <stdio.h>
// SOmething wrong
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
          char a[] = "HelloWORLD";

          char b[20];
          printf("%s\n", ft_strncpy(b, a, 4));
          return (0);
}