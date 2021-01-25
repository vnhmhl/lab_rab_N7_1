
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class complex
{
public:
    double real;
    double imag;
    complex(double real, double imag) {
        this->real = real;
        this->imag = imag;
    }
    void print() {
        ostringstream strReal;
        ostringstream strImag;
        strReal << this->real;
        strImag << this->imag;
        cout << (strReal.str() + "+" + strImag.str() + "i");
    }
};

double func(double a, double b) {
    return a + b;
}

complex func(complex a, complex b) {
    complex rez = complex(a.real + b.real, a.imag + b.imag);
    return rez;
}

int main()
{
    double a1 = 0.356;
    double b1 = 0.25644;
    complex a2 = complex(3.14, 2.005);
    complex b2 = complex(0.5, 1.02);
    cout << a1 << " + " << b1 << " = " << func(a1, b1) << endl;
    a2.print();
    cout << " + ";
    b2.print();
    cout << " = ";
    func(a2, b2).print();
    cout << endl;
    system("pause");
    return 0;
}
