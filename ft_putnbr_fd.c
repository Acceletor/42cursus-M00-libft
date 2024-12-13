#include "libft.h"

static void	printnum(unsigned int n, int fd)
{
	if (n > 9)
		printnum(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd );
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int num;
	if (n < 0)
	{
		ft_putchar_fd('-',fd);
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)n;

	printnum(num, fd);
}
