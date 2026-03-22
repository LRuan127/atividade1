#ifndef CONTA_HPP
#define CONTA_HPP

#include <string>
using namespace std;

class Conta {
private:
    string nome;
    int saldo;

public:
    Conta(string nome);
    int getSaldo();
    string getNome();
    void depositar(int valor);
    void sacar(int valor);
};

#endif