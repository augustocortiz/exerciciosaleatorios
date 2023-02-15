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
	
	//Potência	
	potencia = pow(x,2);
	cout << "\nPotência = " << potencia;
}
