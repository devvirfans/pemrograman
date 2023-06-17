#include <iostream>
#include <cstring>

using namespace std;
struct shape{
    float luas;
    int sisi;
    string nameShape;
};
int main(){
    struct shape thing[5];
    for(int i=0; i<3; i++){ //taking values from user
        cout << "Shape " << i + 1 << endl;
        cout << "Enter luas" << endl;
        cin >> thing[i].luas;
        cout << "Enter nameShape" << endl;
        cin >> thing[i].nameShape;
        cout << "Enter Sisi" << endl;
        cin >> thing[i].sisi;
    }
    for(int i=0; i<3; i++){ //printing values
        cout << "Shape " << i + 1 << endl;
        cout << "Luas: " << thing[i].luas << endl;
        cout << "NameShape: " << thing[i].nameShape << endl;
        cout << "Sisi: " << thing[i].sisi << endl;
    }
    return 0;
}