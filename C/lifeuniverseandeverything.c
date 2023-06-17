#include <stdio.h>

int main()
{
    int a; // a = integer of any number
    scanf("%d", &a);
    while (a != 42)
    {
        printf("%d\n", a);
        scanf("%d", &a);
    }
    return 0;
}