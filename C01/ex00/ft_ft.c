void ft_ft(int *nbr)
{
    *nbr = 42;
}


#include<stdio.h>
int main(void)
{
    int nbr;
    int *ptr = &nbr;
    ft_ft(ptr);
    printf("%d", nbr);
}
