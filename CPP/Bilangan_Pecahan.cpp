#include <bits/stdc++.h>

using namespace std;

class Pecahan
{
    private:
    int gcd, a, b, c, a1, b1, c1;

    public:
    void set()
    {
        cin >> a >> b >> c;
        gcd=__gcd(b,c);
        b=b/gcd;
        c=c/gcd;
    }
    void add()
    {
        cin >> a1 >> b1 >> c1;
        b = a*c+b;
        b1 = a1*c1+b1;
        b *= c1;
        b1 *= c;
        c1 *= c;
        c = c1;
        b += b1;
        a = b/c;
        b %= c;
        gcd=__gcd(b,c);
        b=b/gcd;
        c=c/gcd;
    }
    void mul()
    {
        cin >> a1 >> b1 >> c1;
        b = a*c+b;
        b1 = a1*c1+b1;
        b *= b1;
        c *= c1;
        a = b / c;
        b %= c;
        gcd=__gcd(b,c);
        b=b/gcd;
        c=c/gcd;

    }
    void p()
    {
        if (b == 0)
        {
            cout << a << endl;
        }
        else if (a == 0)
        {
            cout << b << "/" << c << endl;
        }
        else
        {
            cout << a << " " << b << "/" << c << endl;
        }
    }
    void inc()
    {
        a++;
    }
    void dec()
    {
        a--;
    }

};

int main(){
    Pecahan p;
    string temp;
    while (cin >> temp)
    {
        if (temp == "set")
        {
            p.set();
        }
        else if (temp == "add")
        {
            p.add();
        }
        else if (temp == "p")
        {
            p.p();
        }
        else if (temp == "inc")
        {
            p.inc();
        }
        else if (temp == "dec")
        {
            p.dec();
        }
        else if (temp == "mul")
        {
            p.mul();
        }
        else if (temp == "end")
        {
            break;
        }
        
    }
    
    
    
    
}