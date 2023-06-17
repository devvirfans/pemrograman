#include <stdio.h>
int main(){
int a, b, c, d;
scanf("%d" "%d" "%d" "%d", &a, &b, &c, &d);
if (a == b && b == c && c == d)
{
printf("KONSTAN");
} else if ( a >= b && b >= c && c >= d){
printf("MONOTON MENURUN");
} else if (a <= b && b <= c && c <= d){
printf("MONOTON MENAIK");
} else {
printf("TIDAK MONOTON");
} return 0;
}
