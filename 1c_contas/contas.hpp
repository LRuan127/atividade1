#ifndef CONTAS_HPP
#define CONTAS_HPP

#include "conta.hpp"
#include <vector>
using namespace std;

class Contas {
private:
    vector<Conta> lista;

public:
    void adicionar(Conta c);
    Conta& getConta(int i);
};

#endif