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
    {
        if (estacheio()){
            cout << "Aarvore esta cheia!\n";
            cout << "Nao foi possivel inserir este elemento\n";
        } else{
            No* NoNovo = new No;
            NoNovo->aluno = aluno;
            NoNovo->filhodireita = NULL;
            NoNovo->filhoesquerda = NULL;
            if (raiz == NULL){
                raiz = NoNovo;
            } else{
                No* temp = raiz;
                while (temp != NULL){
                    if (aluno.obterRa() < temp->aluno.obterRa){
                        if (temp->filhoesquerda == NULL){
                            temp->filhoesquerda = NoNovo;
                            break;
                        } else{
                            temp = temp->filhoesquerda;
                        }
                   } else{
                       if (temp->filhodireita == NULL){
                           temp->filhodireita = NoNovo;
                           break;
                       } else{
                            temp = temp->filhodireita;
                       }
                  }
             }
        }
    }

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