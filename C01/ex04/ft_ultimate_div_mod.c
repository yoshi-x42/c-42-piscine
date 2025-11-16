#include<unistd.h>

void    ft_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = temp / *b;
    *b = temp % *b;
}

int main(void)
{
    int a;
    int b;

    a = 20;
    b = 10;

    ft_div_mod(&a, &b);

    a = a + '0';
    b = b + '0'; 

    write(1, &a, 1);
    write(1, "\n", 1);
    write(1, &b, 1);
    return 0;
}