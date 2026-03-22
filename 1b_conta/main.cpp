#include <iostream>
#include "conta.hpp"
using namespace std;

int main() {
    Conta c("Joao");
    c.depositar(100);
    c.sacar(30);

    cout << c.getNome() << " - Saldo: " << c.getSaldo() << endl;
}