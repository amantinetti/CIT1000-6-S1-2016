#include <iostream>

using namespace std;

int main(){
	int num;
	cout<<"Ingrese un entero de 5 números: ";
	cin>>num;

	int dig1, dig2, dig3, dig4, dig5;

	dig1 = num%10;
	num = num/10;

	dig2 = num%10;
	num = num/10;

	dig3 = num%10;
	num = num/10;

	dig4 = num%10;
	num = num/10;
	
	dig5 = num%10;

	if(dig1 == dig5 && dig2 == dig4){
		cout<<"\nEl numero es palindromo"<<endl;
	}
	else{
		cout<<"\nEl numero no es palindromo"<<endl;
	}
	return 0;
}