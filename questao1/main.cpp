#include <iostream>
#include <cmath>
using namespace std;

struct Ponto {
    float x;
    float y;
};

float distancia(Ponto a, Ponto b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() {
    Ponto p1 = {0, 0};
    Ponto p2 = {3, 4};

    cout << "Distancia: " << distancia(p1, p2) << endl;

    return 0;
}