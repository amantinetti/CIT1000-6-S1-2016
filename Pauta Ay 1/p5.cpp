#include <iostream>

using namespace std;

int main()
{
	float nota;
	cout<<"Ingrese la nota del alumno: "<<endl;
	cin>>nota;

	if(nota > 7.0 || nota < 1.0){
		cout<<"Fuera de rango"<<endl;
	}
	else if(nota >= 6.0 && nota <= 7.0){
		cout<<"Distincion maxima"<<endl;
	}
	else if(nota >= 5.0 && nota <= 5.9){
		cout<<"Destacado"<<endl;
	}
	else if(nota >= 4.0 && nota <= 4.9){
		cout<<"Reguleque"<<endl;
	}
	else if(nota < 4.0){
		cout<<"Reporbado"<<endl;
	}
	return 0;
}