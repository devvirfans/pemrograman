#include <iostream>
#include <string>
using namespace std;
class Buku
{
    public:
    Buku() {}
    Buku(string s): judul(s) {}
    void display() {cout<<judul<<endl;}
}