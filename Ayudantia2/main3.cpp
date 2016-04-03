//
// Created by amantinetti on 31-03-16.
//
#include <iostream>
#include <cmath> //Libreria que contiene la funcion pow

using namespace std;

int main() {
    int a;
    cout<<"Ingrese un Numero: ";
    cin >> a;
    if (a%2==0) //Verifica si el resto de la division es 0
        cout<<pow(a,2)<<endl;
    else
        cout<<pow(a,3)<<endl;
    return 0;
}
