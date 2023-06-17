#include <stdio.h>
#define SIZE 100

int main(){
    int a,m[SIZE][SIZE], b, c, d, i, j, x;
    scanf("%d", &a);
    if (a <= 100  && a >=1)
    {
            x = a - 1;
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
            scanf("%d", &m[i][j]);  
            }
        }
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
                if (i == j)
                {
                    c = m[i][j];
                    m[i][j] = m[i][x-j];
                    m[i][x-j] = c;
                } 
            }
        }
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
               printf("%d ", m[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}