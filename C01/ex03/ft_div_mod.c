#include<unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int div;
    int mod;

    ft_div_mod(20, 10, &div, &mod);

    div = div + '0';
    mod = mod + '0';
    write(1, &div, 1);
    write(1, "\n", 1);
    write(1, &mod, 1);
    return 0;
}