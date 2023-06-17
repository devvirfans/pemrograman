#include <stdio.h>
#define size 100

int main(){
    int N, Loyang[size][size], x, y, M, temp, i, j, n;
    scanf("%d", &N);
    if ( 1 <= N && N <= 10)
    {
        scanf("%d %d %d", &x, &y, &M);
            if (x <= N-1 && y <= N-1 && x >= 0 && y >= 0 && M+x-1 <= N-1 && M+y-1 <= N-1)
            {
                while(x != 0 && y != 0 && M != 0)
            {
                if (x <= N-1 && y <= N-1 && x >= 0 && y >= 0 && M+x-1 <= N-1 && M+y-1 <= N-1)
                {
                    for (int i = x; i < M+x; i++)
                    {
                        for (int j = y; j < M+y; j++)
                        {
                            if (Loyang[i][j] == 1)
                            {
                                Loyang[i][j] = 0;
                            }
                            else 
                            {
                                Loyang[i][j] = 1;
                            }
                        }
                    }
                }
                else return 0;
                scanf("%d %d %d", &x, &y, &M);
            }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%d ", Loyang[i][j]);
            }
            printf("\n");
        }
        }
    }
}