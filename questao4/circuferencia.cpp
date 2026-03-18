#include "circuferencia.hpp"
#define PI 3.14

float area(Circunferencia c) {
    return PI * c.raio * c.raio;
}

float perimetro(Circunferencia c) {
    return 2 * PI * c.raio;
}