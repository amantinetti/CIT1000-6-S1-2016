#include <iostream>

using namespace std;

int main()
{
	int cantidad, pagada;
	cout<<"Ingrese la cantidad a pagar: "<<endl;
	cin>>cantidad;
	cout<<"Ingrese la cantidad pagada: "<<endl;
	cin>>pagada;

	if(cantidad > pagada){
		cout<<"Le faltan "<<cantidad-pagada<<endl;
		return 0;
	}
	
	int vuelto = pagada-cantidad;
	
	if(vuelto == 0) cout<<"No requiere vuelto."<<endl;
	else{
		if(vuelto/20000 > 0){
			cout<<"Entregar "<<vuelto/20000<<" billetes de 20000."<<endl;
			vuelto = vuelto%20000;
		}
		if(vuelto/10000 > 0){
			cout<<"Entregar "<<vuelto/10000<<" billetes de 10000."<<endl;
			vuelto = vuelto%10000;
		}
		if(vuelto/5000 > 0){
			cout<<"Entregar "<<vuelto/5000<<" billetes de 5000."<<endl;
			vuelto = vuelto%5000;
		}
		if(vuelto/2000 > 0){
			cout<<"Entregar "<<vuelto/2000<<" billetes de 2000."<<endl;
			vuelto = vuelto%2000;
		}
		if(vuelto/1000 > 0){
			cout<<"Entregar "<<vuelto/1000<<" billetes de 1000."<<endl;
			vuelto = vuelto%1000;
		}
		if(vuelto/500 > 0){
			cout<<"Entregar "<<vuelto/500<<" monedas de 500."<<endl;
			vuelto = vuelto%500;
		}
		if(vuelto/100 > 0){
			cout<<"Entregar "<<vuelto/100<<" monedas de 100."<<endl;
			vuelto = vuelto%100;
		}
		if(vuelto/50 > 0){
			cout<<"Entregar "<<vuelto/50<<" monedas de 50."<<endl;
			vuelto = vuelto%50;
		}
		if(vuelto/10 > 0){
			cout<<"Entregar "<<vuelto/10<<" monedas de 10."<<endl;
			vuelto = vuelto%10;
		}
		if(vuelto/5 > 0){
			cout<<"Entregar "<<vuelto/5<<" monedas de 5."<<endl;
			vuelto = vuelto%5;
		}
		if(vuelto/1 > 0){
			cout<<"Entregar "<<vuelto/1<<" monedas de 1."<<endl;
			vuelto = vuelto%1;
		}
	}
	return 0;
}