// Pilha Dinamica = Dynamic stack

typedef int TipoItem;

struct No //Node
{
    TipoItem valor;
    No* proximo;
};

class pilhadinamica{
    private:
    No* NoTopo;
    
    public:
    pilhadinamica(); //construtora 
    ~pilhadinamica(); //destrutura
    bool estavazia(); //tem memoria //isfull
    bool estacheia(); //isempty
    void inserir(TipoItem item ); //push
    TipoItem remover(); //pop
    void imprimir(); //print

};