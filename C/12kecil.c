#include <stdio.h>
int main (){
int a, counter = 0, b, c; 
scanf("%d\n", &a);
while (counter < a)
{
scanf("%d", &c);
if (counter == 0) 
b = c;
else
{
if (c < b)
b = c;
}
counter++;
}
printf("%d\n", b);
return 0;
}
