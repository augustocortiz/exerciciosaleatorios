#include<iostream>
#include<locale.h>
using namespace std;

float valor, imposto;
int codigo;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Valor do produto R$ ";
	cin >> valor;
	cout << "Código do estado de origem(1 a 6): ";
	cin >> codigo;
	
	switch(codigo){
		case 1: imposto = 0.2*valor;
			break;
		case 2: imposto = 0.15*valor;
			break;
		case 3: imposto = 0.1*valor;
			break;
		case 4: imposto = 0.08*valor;
			break;
		case 5: imposto = 0.05*valor;
			break;
		case 6: imposto = 0;
			break;
		default: cout << "Opção inválida!" <<endl;
	}
	if(codigo>0 and codigo<7)
		cout << "Imposto é R$ " <<imposto <<endl;
	
	system("PAUSE");
	system("cls");
	
}
