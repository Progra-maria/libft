
#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    ft_putstr_fd((ft_itoa(n)), fd);
}

int main(void)
{
    ft_putnbr_fd(2147483647,1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(-2147483648,1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(0,1);
    return (0);
}