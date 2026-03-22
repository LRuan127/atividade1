#include <iostream>
using namespace std;

struct Node {
    int valor;
    Node* prox;
};

class Lista {
private:
    Node* inicio;

public:
    Lista() { inicio = NULL; }

    void inserir(int x) {
        Node* novo = new Node{x, NULL};
        if (!inicio) inicio = novo;
        else {
            Node* temp = inicio;
            while (temp->prox) temp = temp->prox;
            temp->prox = novo;
        }
    }

    bool vazia() {
        return inicio == NULL;
    }

    bool busca(int x) {
        Node* temp = inicio;
        while (temp) {
            if (temp->valor == x) return true;
            temp = temp->prox;
        }
        return false;
    }
};