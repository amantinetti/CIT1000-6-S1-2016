#include <iostream>

using namespace std;

int main(){
	float l, r, perimetro, resto, numvueltasreal;
	float M_PI = 3.14152;
	int num_vueltas;
	//Entrada de datos
	cout <<
	"Introduce la longitud de la manguera y el radio: ";
	cin>>l>>r;
	//Calculos realizados
	perimetro=2*M_PI*r;
	numvueltasreal=l/perimetro;
	num_vueltas = int(numvueltasreal);
	resto = (numvueltasreal - num_vueltas) * perimetro;
	//Muestro resultados
	cout << "vueltas: " << num_vueltas << " resto: "<< resto << endl;
	
	return 0;
}