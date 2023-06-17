#include <stdio.h>
#include <string.h>

int main()
{
   char cars[][10] = {"Mustang","Corvette","Camaro", "Ferarri"};
   char string[100];

   for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
   {
    scanf("%s", string);
    strcpy(cars[i], string);
    printf("%s\n", cars[i]);
   }
}