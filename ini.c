# u
CodigoVariadoAlgo
#Este codigo iniciará con la implementación de listas enlazadas
#y luego se añadirá la implementación del método de ordenación
#MergeSort y #QuickSort ambos muy eficientes y claramente diferenciados
typedef int TInfo;
typedef struct nodo{
  TInfo elem;
  struct nodo* next;
}TNodo;
typedef struct lista{
  struct nodo* head;
  struct nodo* tail;
}TLista;

//Metodos de las listas enlazadas
void initialize(TLista* lista)
{
  lista->head=NULL;
  lista->tail=NULL;
}
int isEmpty(TLista lista)
{
  return lista.head==NULL;
}
  
