#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int matricula;
    float nota1, nota2;
};

float media(Aluno a) {
    return (a.nota1 + a.nota2) / 2;
}

int main() {
    Aluno a = {"Joao", 123, 8.0, 7.0};

    cout << "Media: " << media(a) << endl;

    return 0;
}