#include <iostream>
#include "contas.hpp"
using namespace std;

void transferencia(Contas &contas, int a, int b, int valor) {
    Conta &c1 = contas.getConta(a);
    Conta &c2 = contas.getConta(b);

    if (c1.getSaldo() >= valor) {
        c1.sacar(valor);
        c2.depositar(valor);
    }
}

int main() {
    Contas contas;
    contas.adicionar(Conta("A"));
    contas.adicionar(Conta("B"));

    contas.getConta(0).depositar(100);

    transferencia(contas, 0, 1, 50);

    cout << contas.getConta(0).getSaldo() << endl;
    cout << contas.getConta(1).getSaldo() << endl;
}