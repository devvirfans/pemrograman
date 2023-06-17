#include <stdio.h>

int main()
{
    double a, b=1.15; //a = harga sesudah pajak; b = pajak;
    scanf("%lf", &a);
    if (0 < a && a < __DBL_MAX__)
    {
        a /= b;
        printf("%.2lf\n", a);
    }
    return 0;

}