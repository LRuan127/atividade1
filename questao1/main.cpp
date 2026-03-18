#include <iostream>
#include "ponto.hpp"
using namespace std;

int main() {
    Ponto p1 = {0, 0};
    Ponto p2 = {3, 4};

    cout << distancia(p1, p2) << endl;

    return 0;
}