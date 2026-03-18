#include "lista.hpp"

int main() {
    Lista l;
    l.tamanho = 0;

    inserir(l, 10);
    inserir(l, 20);

    imprimir(l);

    return 0;
}