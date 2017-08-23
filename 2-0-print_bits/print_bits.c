#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		result[8];
	int		i;
	int		swap;

	swap = octet;
	i = 7;

	while (i >= 0)
	{
		result[i] = swap % 2 + '0';
		swap = swap / 2;
		i--;
	}
	i = 0;
	while (i < 8)
	{
		write(1, &result[i], 1);
		i++;
	}
}
