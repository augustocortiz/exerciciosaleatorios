#include<iostream>
#include<math.h>
using namespace std;

float x, raizqd, potencia;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "x: ";
	cin >> x;
	
	//Raiz quadrada
	raizqd = sqrt (x);
	cout << "Raiz = " << raizqd;
	
	//Pot�ncia	
	potencia = pow(x,2);
	cout << "\nPot�ncia = " << potencia;
}
