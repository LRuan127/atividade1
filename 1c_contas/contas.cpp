#include "contas.hpp"

void Contas::adicionar(Conta c) {
    lista.push_back(c);
}

Conta& Contas::getConta(int i) {
    return lista[i];
}