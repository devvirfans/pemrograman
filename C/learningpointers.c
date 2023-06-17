#include <stdio.h>

int main(){
    int wealth = 1000;
    int * pWealth = &wealth;
    int pWealth2 = *pWealth + 1000;
    printf("%p\n", wealth);
    printf("%p\n", *pWealth);
    printf("%p %d", pWealth2, pWealth2);

}