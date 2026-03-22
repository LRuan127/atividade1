#include "conta.hpp"

Conta::Conta(string nome) {
    this->nome = nome;
    saldo = 0;
}

int Conta::getSaldo() {
    return saldo;
}

string Conta::getNome() {
    return nome;
}

void Conta::depositar(int valor) {
    if (valor > 0)
        saldo += valor;
}

void Conta::sacar(int valor) {
    if (valor > 0 && saldo >= valor)
        saldo -= valor;
}