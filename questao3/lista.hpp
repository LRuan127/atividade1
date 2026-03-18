#ifndef LISTA_HPP
#define LISTA_HPP

struct Lista {
    int dados[100];
    int tamanho;
};

void inserir(Lista &l, int valor);
void imprimir(Lista l);

#endif