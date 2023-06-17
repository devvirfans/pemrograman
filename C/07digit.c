#include <stdio.h>
int main()
{
    long long int a, temp, hasil, positif;
    scanf ("%lld", &a);
    a= a%100;
    temp = a/10;
    hasil = temp*7;
    if (hasil >= 0) printf ("%lld",hasil);
    else 
    {
        positif= hasil*-1;
        printf("%lld", positif);
    }
}
