#include <stdio.h>
#include <string.h>

int main()
{
   char cars[][10] = {"Mustang","Corvette","Camaro", "Ferarri"};
   char string[100];

   for (int i = 0; i < 3; i++)
   {
      scanf("%s", &string[i]);
      printf("%s\n", &string[i]);
   }
   
   
   
}