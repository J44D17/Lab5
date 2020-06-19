#include <iostream>
#include "node.h"

using namespace std;

class LinkedList{
    private:
        int dato;
        Node *lista;
    public:
        LinkedList();//Constructor 1 cuando no hayan pasado datos
        LinkedList(int);//Constructor 2 caundo pasen un entero
        ~LinkedList();

        void insert(int);
        void print();
        void remove(int);
};

LinkedList::LinkedList(){
    dato=0;
    lista=NULL;
}
LinkedList::LinkedList(int numero){
    lista= new Node(numero);
    this->dato=1;
}

LinkedList::~LinkedList()
{
}
void LinkedList::insert(int numero){
    Node *nuevo_nodo=new Node;//crear un espacio en memoria
    nuevo_nodo->setdato(numero);//lenarlo con el numero

    //crear 2 punteros de tipo Nodo auxiliares
    Node *aux1=lista;//el aux1 apunte a lista
    Node *aux2=NULL;

    while((aux1!=NULL)&&(aux1->getdato()<numero)){
        aux2=aux1;
        aux1=aux1->getsiguiente();
    }
    if(aux1==lista){
        lista=nuevo_nodo;
    }
    else{
        aux2->setsiguiente(nuevo_nodo);
    }
    nuevo_nodo->setsiguiente(aux1);
    dato++;
}

void LinkedList::print(){
    Node *actual= new Node;//crear espacio
    actual=lista;
    while(actual!=NULL){
        cout<<actual->getdato()<<"-";
        actual=actual->getsiguiente();
    }
    cout<<endl;
}

void LinkedList::remove(int dato){
    if(lista!=NULL){
        Node *aux_borrar=lista;
        Node *anterior= NULL;

        //Este bucle recorre toda la lista enlazada siempre y cuando no este vacia o  el dato a encontrar sea el primero
        while((aux_borrar!=NULL) &&(aux_borrar->getdato()!=dato)){
            anterior=aux_borrar;
            aux_borrar=aux_borrar->getsiguiente();
        }

        //Cuando ele elemento no existe
        if(aux_borrar==NULL)
            cout<<"El elemento no ha sido encontrado"<<endl;
        
        else if(anterior==NULL){
            lista=lista->getsiguiente();
            delete aux_borrar;
            cout<<"Se elimino el elemento"<<endl;
        }

        else{
            anterior->setsiguiente(aux_borrar->getsiguiente());
            delete aux_borrar;
            cout<<"Se elimino el elemento"<<endl;
        }
    }
    else
        cout<<"La lista esta vacia"<<endl;//cuando la lista esté vacía
}
