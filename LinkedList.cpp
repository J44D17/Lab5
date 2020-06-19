#include<iostream>
#include <stdlib.h>
#include "LinkedList.h"
#include <conio.h>

using namespace std;

int main(){

    int opcion,dato;
    LinkedList lista;

    do{
    cout<<"\tMENU"<<endl;
    cout<<"1.- Insertar elemento"<<endl;
    cout<<"2.- Mostrar lista"<<endl;
    cout<<"3.- Eliminar elemento"<<endl;
    cout<<"4.- Salir"<<endl;
    cout<<"Opcion: ";cin>>opcion;

    switch(opcion){
        case 1:cout<<"Digite un numero: ";
        cin>>dato;
        lista.insert(dato);
        cout<<endl;
        system("pause");
        break;
    
        case 2:
        lista.print();
        system("pause");
        break;

        case 3:cout<<"Digite el numero a eliminar: ";
        lista.remove(dato);
        cout<<endl;
        system("pause");
        break;
        }
        
        system("cls");
    }while(opcion != 4);
    
    getch();
    return 0;
}