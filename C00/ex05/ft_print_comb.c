#include <unistd.h>

void ft_print(char first, char second, char last)
{
    write(1, &first, 1);
    write(1, &second, 1);
    write(1, &last, 1);
    if (!(first == '7' && second == '8' && last == '9'))
        write(1, ", ", 2);
}

void    ft_print_comb(void)
{
    int i;
    int j;
    int k;

    i = '0';
    j = '0';
    k = '0';

    while (i <= '7')
    {
        j = i + 1;
        while (j <= '8')
        {
            k = j + 1;
            while (k <= '9')
            {
                // write(1, &i, 1);
                // write(1, &j, 1);
                // write(1, &k, 1);
                // if (!(i == '7' && j == '8' && k == '9'))
                // write(1, ", ", 2);
                ft_print(i, j, k);
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}