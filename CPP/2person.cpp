#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>

using namespace std;
class Person {
    private:
        string nama;
        int usia;
        int tinggi;
        double berat;
    public:
        int tinggidata = 0;
        Person() {
            nama = "";
            usia = 0;
            tinggi = 0;
            berat = 0.0;
        }
        void setPerson(string s, int i, int i2, double d){
            nama = s;
            usia = i;
            tinggi = i2;
            berat = d;
        }
        string showName(){
            return nama;            
        }
        int showUsia(){
            return usia;
        }
        int showTinggi(){
            return tinggi;
        }
};

int main(){
    int n, i, j=0, dTinggi=0, usia, tinggi;
    double berat;
    cin >> n;
    string name;
    Person human[n];

    for (i = 0; i < n; i++)
    {
        cin>>name>>usia>>tinggi>>berat;
        dTinggi+=tinggi;
        human[i].setPerson(name, usia, tinggi, berat);
    }

    double avg = (double)dTinggi/n;

    for (i = 0; i < n; i++)
    {
        if(human[i].showTinggi() > avg) j++;
    }

    for (i = 0; i < n; i++)
    {
        cout << human[i].showName() << " " << human[i].showUsia() << endl;
    }
    
    cout << fixed << setprecision(2) << avg << endl;
    cout << j << endl;
    return 0;
}