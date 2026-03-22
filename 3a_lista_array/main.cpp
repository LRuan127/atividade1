#include <iostream>
using namespace std;

#define MAX 100

class Lista {
private:
    int v[MAX];
    int n;

public:
    Lista() { n = 0; }

    void inserir(int x) {
        if (n < MAX) v[n++] = x;
    }

    void remover(int i) {
        for (int j = i; j < n-1; j++)
            v[j] = v[j+1];
        n--;
    }

    bool vazia() {
        return n == 0;
    }

    bool busca(int x) {
        for (int i = 0; i < n; i++)
            if (v[i] == x) return true;
        return false;
    }
};