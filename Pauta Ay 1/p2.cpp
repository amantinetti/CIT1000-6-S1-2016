#include <iostream>

using namespace std;

int main(){
	float peso_onzas;
	cout<<"Ingrese el peso de la caja de cereal en onzas: "<<endl;
	cin>>peso_onzas;

	float peso_Tmetricas = peso_onzas/35273.92;

	cout<<peso_onzas<<" onzas en toneladas metricas son "<<peso_Tmetricas<<endl;
	cout<<"Se necesitan "<<(1/peso_Tmetricas)<<" cajas para tener una tonelada metrica de cereal"<<endl;

	return 0;
}