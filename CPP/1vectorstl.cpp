#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

    int i, c, d;
    double a=0.00, b=0.00;
    vector<int> v;

class Vectorstl {
    public:

    void addData()
    {
        cin >> i;
        while (i != -9)
        {
            v.push_back(i);
            cin >> i;
        }
    }
    void getTotal()
    {
        for (auto i = v.begin(); i != v.cend(); ++i)
        {
            a += *i;
        }
    }
   double getAverage1()
    {
        if(!v.size()){
            a = -9.99;
        }
        else
        {
            a = (a*1.00)/v.size();
            c = v.size();
        }
        return a;
    }
    void deleteData()
    {
    cin >> i;
        while (i != -9)
        {
            v.erase(v.begin()+(i+(v.size()-c)-1));
            cin >> i;
        }
        
    }
    double getAverage2()
    {
        if(!v.size()){
        b = -9.99;
        }
        else
        {
            for (auto i = v.begin(); i != v.cend(); ++i)
            {
                b += *i;
            }
            d = v.size();
            b = (b*1.00)/v.size();
        }
        return b;
    }
    int retur1()
    {
        return c;
    }
    int retur2()
    {
        return d;
    }
};

int main()
{
    Vectorstl v = Vectorstl();
    double a, b;
    int c, d;

    v.addData();
    v.getTotal();
    a = v.getAverage1();
    v.deleteData();
    b = v.getAverage2();
    c = v.retur1();
    d = v.retur2();

    cout << c << " " << d << endl;
    cout << setprecision(2) << fixed << a << " " << b << endl;  
    
}