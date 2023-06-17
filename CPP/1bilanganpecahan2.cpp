#include <iostream>
#include <numeric> // untuk fungsi std::gcd
using namespace std;

class Fraction {
private:
    int a, b, c;

public:
    Fraction(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
        simplify();
    }

    void set(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
        simplify();
    }

    void simplify() {
        if (c == 0) {
            return;
        }
        int gcd = std::gcd(std::gcd(a, b), c); // menggunakan std::gcd
        a /= gcd;
        b /= gcd;
        c /= gcd;
    }

    void display() {
        if (c == 0) {
            cout << "Undefined" << endl;
            return;
        }
        if (a == 0) {
            cout << "0" << endl;
            return;
        }
        if (b == 0 && c == 1) {
            cout << a << endl;
            return;
        }
        cout << a << " " << b << "/" << c << endl;
    }

    Fraction add(Fraction other) {
        int new_a = a * other.c + b * other.a;
        int new_b = b * other.c;
        int new_c = c * other.c;
        return Fraction(new_a, new_b, new_c);
    }

    Fraction mul(Fraction other) {
        int new_a = a * other.a;
        int new_b = b * other.b;
        int new_c = c * other.c;
        return Fraction(new_a, new_b, new_c);
    }

    Fraction operator+(Fraction other) {
        return add(other);
    }

    Fraction operator*(Fraction other) {
        return mul(other);
    }

    Fraction operator++(int) {
        Fraction old = *this;
        a = a * c + b;
        b = 0;
        return old;
    }

    Fraction operator--(int) {
        Fraction old = *this;
        a = a * c - b;
        b = 0;
        return old;
    }
};

int main() {
    Fraction f(3, 1, 4);
    f.display(); // expected output: 3 1/4

    f.set(2, 2, 5);
    f.display(); // expected output: 2 2/5

    Fraction g(1, 1, 2);
    Fraction h = f + g;
    h.display(); // expected output: 5 3/10

    Fraction i = f * g;
    i.display(); // expected output: 2 9/20

    f++;
    f.display(); // expected output: 2 2/5

    g--;
    g.display(); // expected output: 0 1/2

    return 0;
}
