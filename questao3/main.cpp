#include <iostream>
using namespace std;

struct Lista {
    int dados[100];
    int tamanho;
};

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

int main() {
    Lista l;
    l.tamanho = 0;

    inserir(l, 10);
    inserir(l, 20);
    inserir(l, 30);

    imprimir(l);

    return 0;
}