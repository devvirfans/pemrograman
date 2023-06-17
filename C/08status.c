#include <stdio.h>
int main(){
    int uas, uts, rataan;
    scanf ("%d" "%d", &uas, &uts);
    rataan = (uts + uas)/2;
    if (rataan < 60)
    {
        printf ("TIDAK LULUS");
    } else if ((uas <= 40 || uts <= 40) && rataan > 60 )
    {
        printf ("LULUS BERSYARAT");
    } else if (uas > 40 && uts > 40 && rataan > 60){
        printf ("LULUS");
    }
}