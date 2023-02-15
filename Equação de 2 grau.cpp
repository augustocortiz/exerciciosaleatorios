#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

float a, b, c, delta, raiz1, raiz2;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor de a ";
	cin >> a;	
	cout << "Informe o valor de b ";
	cin >> b;	
	cout << "Informe o valor de c ";
	cin >> c;
	
	delta = (b*b)-(4*a*c);
	
	if (delta < 0)
		cout  << "Não existem raizes reais para operação";
	else{
		raiz1 = (-b+sqrt(delta))/2*a;
		raiz2 = (-b-sqrt(delta))/2*a;
		cout << "Raiz 1 : " << raiz1 << " Raiz 2 : " << raiz2;
	}
}
