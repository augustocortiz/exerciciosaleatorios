#include<iostream>
#include<locale.h>
using namespace std;

float valor;
char importado;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do produto: ";
	cin >> valor;
	
	cout << "O produto � importado? [s para sim / n para nao]: ";
	cin >> importado;
	
	switch (importado){
	
		case 's':  
			cout << "O valor final do produto � importado � R$ " << valor-(valor*0.10);
			break;
		case 'n':
			cout << "O valor final do produto � nacional � R$ " << valor-(valor*0.05);
			break;
		default:
			cout << "Entrada inv�lida!";
	}
	
}
