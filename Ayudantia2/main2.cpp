//
// Created by amantinetti on 31-03-16.
//
#include <iostream>
using namespace std;

int main() {

    float nota;

    cout << "Nota? ";
    cin >> nota;

    cout<<"Calificacion? ";

    if (nota<1 || nota>7)
        cout<<"Fuera de Rango"<<endl;
    else if (nota>=1 && nota <4)
        cout<<"Reprobado"<<endl;
    else if (nota>=4 && nota <5)
        cout<<"Aprobado"<<endl;
    else if (nota>=5 && nota <6)
        cout<<"Distincion"<<endl;
    else if (nota>=6 && nota <7)
        cout<<"Distincion Maxima"<<endl;
    else
        cout<<"Califica para Ayudante"<<endl;

    return 0;

}