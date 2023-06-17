#include <stdio.h>
int main(){
int a, b, c;
scanf ("%d" "%d" "%d", &a, &b, &c);
if (c < a && c < b)
{
printf ("kiri");
} else if ( c > a && c < b )
{
printf ("tengah");
} else if ( c > a && c > b){
printf ("kanan");
} else {
printf("tepi");
} return 0;
}