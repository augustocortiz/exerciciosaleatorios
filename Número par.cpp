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
		cout << "\nO número é par";
	else
		cout << "\nO número é ímpar";
	
	if (valor%5 == 0 && valor%2 == 0)
		cout << "\nO número é divisível por 2 e por 5";
		
	else if (valor%5 == 0)
		cout << "\nO número é divisível por 5";
		
	else
		cout << "\nO número não é divisível por 5";
		
		
}
