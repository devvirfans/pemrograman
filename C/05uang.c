#include <stdio.h>
#include <limits.h>

int main()
{
    int a, m1=100, m2=50, m3=10, m4=5, m5=2, m6=1, n1, n2, n3, n4, n5, n6; // a = nilai kembalian
    scanf("%d", &a);
    if (0<a && a<LONG_MAX)
    {
        n1 = a / m1;
        a -= (m1*n1);
        n2 = a / m2;
        a -= (m2*n2);
        n3 = a / m3;
        a -= (m3*n3);
        n4 = a / m4;
        a -= (m4*n4);
        n5 = a / m5;
        a -= (m5*n5);
        n6 = a / m6;
        a -= (m6*n6);
        printf("%d %d %d %d %d %d \n", n1, n2, n3, n4, n5, n6);
    }
    return 0;
    
    
    
}