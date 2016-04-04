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
        cout<<pow(a,2)<<endl; //El primer valor de pow es la variable a elevar
    else                        // el segundo es a cuanto sera elevado
        cout<<pow(a,3)<<endl;  //Tambien se puede utilizar para sacar raices
    return 0;                   // ejemplo raiz cuadrada de 100 = pow(100,1/2)
}
