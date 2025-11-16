int  ft_strlen(char *str)
{
    int count; 
    
    count = 0;
    while (*str)
    {
        count += 1;
        str++;
    }
    return count;
}

#include<stdio.h>

int main(void)
{
    int count;
    count = ft_strlen("HELLO WORLD");
    printf("%d", count);
    return 0;
}