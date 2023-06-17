#include <stdio.h>

int main(){
    long int n, k, angka, c=0;
    double rataan=0;
    scanf("%ld %ld", &n, &k);
    if (n != 0 && k != 0 && k < n)
    {
        for ( int i = 1; i <= n; i++ )
        {
        scanf("%ld", &angka);
        if (i%k == 0)
            {
                rataan = rataan + angka;
                c++;
            }
        }
        rataan /= c;
        printf("%.2lf\n", rataan);
    }
    else
    {
        printf("%.2f\n", 0);
    }
    return 0;
}