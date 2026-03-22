#include <iostream>
#include "contas.hpp"
using namespace std;

int main() {
    Contas contas;


    contas.adicionar(Conta("Joao"));
    contas.adicionar(Conta("Maria"));

  
    contas.getConta(0).depositar(100);
    contas.getConta(1).depositar(200);

  
    cout << contas.getConta(0).getNome() 
         << " - Saldo: " << contas.getConta(0).getSaldo() << endl;

    cout << contas.getConta(1).getNome() 
         << " - Saldo: " << contas.getConta(1).getSaldo() << endl;

    return 0;
}