#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int valor;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe um valor inteiro: ";
	cin >> valor;
	
	if (valor%2 == 0)
		cout << "\nO n�mero � par";
	else
		cout << "\nO n�mero � �mpar";
	
	if (valor%5 == 0 && valor%2 == 0)
		cout << "\nO n�mero � divis�vel por 2 e por 5";
		
	else if (valor%5 == 0)
		cout << "\nO n�mero � divis�vel por 5";
		
	else
		cout << "\nO n�mero n�o � divis�vel por 5";
		
		
}
