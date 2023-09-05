#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"

using namespace std;


    ArvoreBinariadeBusca::ArvoreBinariadeBusca()//construtor
    {
        raiz = NULL;
    }

    ArvoreBinariadeBusca::~ArvoreBinariadeBusca()//destrutor
    {}

    void ArvoreBinariadeBusca::deletarArvore(No* Noatual)
    {}

    No* ArvoreBinariadeBusca::obterRaiz()
    {
        return raiz;
    }

    bool ArvoreBinariadeBusca::estavazio()
    {
        return (raiz == NULL);
    }

    bool ArvoreBinariadeBusca::estacheio()
    {
        try{
            No* temp = new No;
            delete temp;
            return false;
        } catch(bad_alloc exception){
            return true;
        }        
    }

    void ArvoreBinariadeBusca::inserir(Aluno aluno)
    {}

    void ArvoreBinariadeBusca::remover(Aluno aluno)
    {}

    void ArvoreBinariadeBusca::buscar(Aluno& aluno, bool& busca)
    {}

    void ArvoreBinariadeBusca::imprimirpreordem(No* Noatual)
    {}

    void ArvoreBinariadeBusca::imprimiremordem(No* Noatual)
    {}

    void ArvoreBinariadeBusca::imprimirposordem(No* Noatual)
    {}