#include <iostream>
using namespace std;

class Fracao {
public:
    int num, den;

    Fracao(int n, int d) {
        num = n;
        den = d;
    }

    Fracao soma(Fracao f) {
        return Fracao(num*f.den + f.num*den, den*f.den);
    }

    Fracao sub(Fracao f) {
        return Fracao(num*f.den - f.num*den, den*f.den);
    }

    Fracao mult(Fracao f) {
        return Fracao(num*f.num, den*f.den);
    }

    Fracao div(Fracao f) {
        return Fracao(num*f.den, den*f.num);
    }

    void print() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fracao a(1,2), b(3,4);
    a.soma(b).print();
}