#include <iostream>
#include "aluno.hpp"
using namespace std;

int main() {
    Aluno a = {"Joao", 1, 8, 7};

    cout << media(a) << endl;

    return 0;
}