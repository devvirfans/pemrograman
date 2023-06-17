#include <iostream>
using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    void Data(){
        cin >> Name >> Company >> Age;
    }
    void Print(){
        cout << "Name - " << Name << "\nCompany - " << Company << "\nAge - " << Age;
    }
};

int main(){
    Employee employee1;
    employee1.Data();
    employee1.Print();
}
