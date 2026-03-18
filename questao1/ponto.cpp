#include "ponto.hpp"
#include <cmath>

float distancia(Ponto a, Ponto b) {
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}