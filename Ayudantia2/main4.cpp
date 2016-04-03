//
// Created by amantinetti on 31-03-16.
//
#include <iostream>
using namespace std;

int main() {

    int dia;

    cout << "Ingrese un numero: ";
    cin >> dia;

    if (dia<1 || dia>7)
        cout<<"Fuera de Rango"<<endl;
    else if (dia==1)
        cout<<"Domingo"<<endl;
    else if (dia==2)
        cout<<"Lunes"<<endl;
    else if (dia==3)
        cout<<"Martes"<<endl;
    else if (dia==4)
        cout<<"Miercoles"<<endl;
    else if (dia==5)
        cout<<"Jueves"<<endl;
    else if (dia==6)
        cout<<"viernes"<<endl;
    else
        cout<<"Sabado"<<endl;

    return 0;

}