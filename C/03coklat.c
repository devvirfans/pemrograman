#include <stdio.h>

int main()
{
    int c, b=0; // c = coklat; b = bebek
    scanf("%d", &c);
    while (c >= b)
    {
        c -= b;
        b++;
    }

    printf("%d", b);
    return 0; 
}