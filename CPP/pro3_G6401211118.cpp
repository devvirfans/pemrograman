#include<bits/stdc++.h>
using namespace std;
struct shape{
    float luas;
    int sisi;
    string nameShape;
};
typedef struct shape shape;

int main() {
    shape kotak, lingkaran, segitiga;
    kotak.luas = 400.96;
    kotak.sisi = 4;
    kotak.nameShape = "PERSEGI";

    lingkaran.luas = 100.98;
    lingkaran.sisi = 1;
    lingkaran.nameShape = "LINGKARAN";

    segitiga.luas = 75.514;
    segitiga.sisi = 3;
    segitiga.nameShape = "SEGITIGA";

        cout << kotak.nameShape << " luas : " << kotak.luas << " jumlah sisi : " <<
    kotak.sisi << endl;
        cout << lingkaran.nameShape << " luas : " << lingkaran.luas << " jumlah sisi : "
    << lingkaran.sisi << endl;
        cout << segitiga.nameShape << " luas : " << segitiga.luas << " jumlah sisi : " <<
    segitiga.sisi << endl;
    
    return EXIT_SUCCESS;
}