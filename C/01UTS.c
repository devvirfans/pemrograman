#include <stdio.h>
int main()
{
    int a, b, c=0, d=0, e; // a= cilok; b= pemilihan pembayaran;
    scanf("%d %d", &b, &a);
    if (a>=0 && b==1 || b==2 || b==3) // 1= kredit; 2= debit; 3= IPB pay
    {
        if (b==1) // Kartu kredit
        {
            a *= 10000;
            c = a*10/100;
            if (a>=100000)
            {
                d= a*10/100;
            }
            e= a-c-d;
            printf("%d\n", a);
            printf("%d\n", c+d);
            printf("%d\n", e);
        }
        else if (b==2)
        {
            a *= 10000;
            c = a*20/100;
            if (a>=100000)
            {
                d= a*10/100;
            }
            e= a-c-d;
            printf("%d\n", a);
            printf("%d\n", c+d);
            printf("%d\n", e);
        }
        else
        {
            a *= 10000;
            c= a*50/100;
            e= a-c;
            printf("%d\n", a);
            printf("%d\n", c);
            printf("%d\n", e);
        }
    }
    return 0;
}