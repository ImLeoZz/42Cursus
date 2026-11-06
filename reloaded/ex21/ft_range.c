
#include <stdlib.h>


int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*tab;

	i = 0;
	len = max - min;
	tab = malloc(sizeof(int) * len);
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int main(int argc, char *argv[])
{
	int	i = 0;
	int	*tab;

	tab = ft_range(6, 12);
	while (i < 12 - 6)
		__builtin_printf("%d\n", tab[i++]);
	return EXIT_SUCCESS;
}
