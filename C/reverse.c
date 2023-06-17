#include <stdio.h>

int main()
{
    long int n, reverse = 0, r;
    scanf("%ld", &n);
    while (n!=0)
    {
        r =n%10;
        reverse=reverse*10 + r;
        n /=10;
    }
    printf("%ld", reverse*3);
    return 0;
    
}