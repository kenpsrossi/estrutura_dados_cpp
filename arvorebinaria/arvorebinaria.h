#include <iostream>
#include "aluno.h"

struct No{
    Aluno aluno;
    No* filhoesquerda;
    No* filhodireita;
};

class ArvoreBinariadeBusca{// ou BTS = Binary Search Tree
    private:
    No* raiz;

    public:
    ArvoreBinariadeBusca();
    ~ArvoreBinariadeBusca();
    void deletarArvore(No* Noatual);
    No* obterRaiz();
    bool estavazio();
    bool estacheio();
    void inserir(Aluno aluno);
    void remover(Aluno aluno);
    void buscar(Aluno& aluno, bool& busca);
    void imprimirpreordem(No* Noatual);
    void imprimiremordem(No* Noatual);
    void imprimirposordem(No* Noatual);
};
