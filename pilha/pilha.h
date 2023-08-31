
typedef int TipoItem;
const int max_itens = 100;

class pilha{

    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha(); //construtora 
    ~pilha(); //destrutura
    bool estacheia();
    bool estavazia();
    void inserir(TipoItem item );
    TipoItem remover();
    void imprimir();
    int qualtamanho();

};