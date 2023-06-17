#include <stdio.h>

int areaofrec(int lenght, int width){
    int area;
    area = lenght*width;
    return area;
}
int main(){
    int l, w, area;
    l= 10;
    w= 20;
    area = areaofrec(l, w);
    printf("the area of rectacle is: %d", area);
}