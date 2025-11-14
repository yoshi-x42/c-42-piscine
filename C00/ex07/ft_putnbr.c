#include <unistd.h>

void ft_putnbr(int nbr)
{
    char c;
    
    if (nbr == -2147483648)
        return ;
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1; 
    }
    if (nbr >= 10)
        ft_putnbr(nbr/10);
    c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main (void)
{
    ft_putnbr(42);
}