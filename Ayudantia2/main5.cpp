//
// Created by amantinetti on 31-03-16.
//
#include <iostream>
using namespace std;

struct parabola{ //definimos una clase de variable llamada parablola
    int x;  
    int y;
};

int main() {

    parabola p1; //creamos una variable p1 del tipo parabola

    cout<<"Ingrese los valores de la parabola 1"<<endl;
    cout<<"x= ";
    cin>>p1.x;
    cout<<"y= ";
    cin>>p1.y;
    cout<<"Los valores son: x= "<<p1.x<<" y= "<<p1.y<<endl;

    return 0;

}
