#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>
using namespace std;

struct Aluno {
    string nome;
    int matricula;
    float n1, n2;
};

float media(Aluno a);

#endif