#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    fila fila1;
    int opcao;
    TipoItem item;
    cout << "Programa gerador de filas:\n";

    do{
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir elemento!\n";
        cout << "Digite 2 para remover elemento!\n";
        cout << "Digite 3 para imprimir elementos!\n";
        cin >> opcao;
        if (opcao == 1){
            cout << "Digite o elemento a ser inserido\n";
            cin >> item;
            fila1.inserir(item);           
        } else if (opcao == 2){
            item = fila1.remover();
            cout << "O elemento removido e: " << item << endl;
        } else if (opcao == 3){
            fila1.imprimir();
        }
    } while (opcao != 0);

    return 0;
}