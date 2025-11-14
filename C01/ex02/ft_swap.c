#include <stdio.h>


void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp; 
}

int main (void)
{
    int a = 9;
    int b = 6;

    int *ptr1 = &a;
    int *ptr2 = &b;

    ft_swap(ptr1, ptr2);
    printf("%d", a);
    printf("%d", b);
    return 0;
}