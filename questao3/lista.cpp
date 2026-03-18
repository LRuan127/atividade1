#include "lista.hpp"
#include <iostream>
using namespace std;

void inserir(Lista &l, int valor) {
    l.dados[l.tamanho] = valor;
    l.tamanho++;
}

void imprimir(Lista l) {
    for(int i = 0; i < l.tamanho; i++) {
        cout << l.dados[i] << " ";
    }
    cout << endl;
}