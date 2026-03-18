#include <iostream>
#include "circuferencia.hpp"
using namespace std;

int main() {
    Circunferencia c;
    c.raio = 5;

    cout << area(c) << endl;
    cout << perimetro(c) << endl;

    return 0;
}