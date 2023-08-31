#include <iostream>
#include "pilhadinamica.h"
#include <cstddef> // NULL

using namespace std;


    pilhadinamica::pilhadinamica() //construtora
    {
        NoTopo = NULL;
    } 

    pilhadinamica::~pilhadinamica() //destrutura
    {
        No* NoTemp;
        while (NoTopo != NULL){
            NoTemp = NoTopo;
            NoTopo = NoTopo->proximo;
            delete NoTemp;
        }     
    }

    bool pilhadinamica::estavazia() //tem memoria //isfull
    {
        return (NoTopo == NULL);
    }

    bool pilhadinamica::estacheia() //isempty
    {
        No* NoNovo;
        try{
            NoNovo = new No;
            delete NoNovo;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    }

    void pilhadinamica::inserir(TipoItem item ) //push
    {
        if (estacheia()){
            cout << "A pilha esta cheia!\n";
            cout << "Nao foi possivel inserir este elemento!\n";
        } else{
            No* NoNovo = new No;
            NoNovo->valor = item;
            NoNovo->proximo = NoTopo;
            NoTopo = NoNovo;
        }
    }

    TipoItem pilhadinamica::remover() //pop
    {
        if (estavazia()){
            cout << "A pilha esta vazia\n";
            cout << "Nao foi possivel remover nenhum elemento\n";
            return 0;
        } else{
            No* NoTemp;
            NoTemp = NoTopo;
            TipoItem item = NoTopo->valor;
            NoTopo = NoTopo->proximo;
            delete NoTemp;
            return item;
        }
    }

    void pilhadinamica::imprimir()
    {
        No* NoTemp = NoTopo;
        cout << "Pilha: [ ";
        while (NoTemp != NULL){
            cout << NoTemp->valor << " ";
            NoTemp = NoTemp->proximo;
        }
        cout << "]\n";
        
    }

