#include <iostream>
#define PI 3.14
using namespace std;

struct Circunferencia {
    float raio;
};

float area(Circunferencia c) {
    return PI * c.raio * c.raio;
}

float perimetro(Circunferencia c) {
    return 2 * PI * c.raio;
}

int main() {
    Circunferencia c;
    c.raio = 5;

    cout << "Area: " << area(c) << endl;
    cout << "Perimetro: " << perimetro(c) << endl;

    return 0;
}