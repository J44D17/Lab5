#include <iostream>

using namespace std;

class Node{
    private:
        int dato;
        Node *siguiente;
        
    public:
        Node();//Constructor cuando inicie
        Node(int);//Constructor cuando reciba un entero
        Node(Node &);//constructor cuando reciba otro nodo
        ~Node();

        int getdato();
        void setdato(int);

        Node *getsiguiente();
        void setsiguiente(Node *);
};

Node::Node(){
    dato=0;
    siguiente=NULL;
}

Node::Node(int dato){
    this->dato=dato;
    siguiente=NULL;
}

Node::Node(Node &nodo){
    dato=nodo.dato;
    siguiente=nodo.siguiente;
}

Node::~Node(){
}

int Node::getdato(){
    return dato;
}

void Node::setdato(int dato){
    this->dato=dato;
}


Node *Node::getsiguiente(){
    return siguiente;
}

void Node::setsiguiente(Node *siguiente){
    this->siguiente=siguiente;
}
