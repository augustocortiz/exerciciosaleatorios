#include<iostream>
#include<locale.h>
#include<string.h>
using namespace std;

int x, n;
float valor, limpeza, alimento, bebidas;
char tipo;

int main(){	
	setlocale(LC_ALL,"");

	x = 1;
	
	cout << "Informe a quantidade de produtos comprada: ";
	cin >> n;
	
	while (x<=n){
		
		cout << "Informe o tipo de produto (L - Limpeza, A - Alimento, B - Bebidas) ";
		cin >> tipo;
		
		cout << "Informe o valor do produto R$ ";
		cin >> valor;
				
		if (tolower(tipo) == 'l')
			limpeza = limpeza + valor;
		
		else if (tolower(tipo) == 'a')
			alimento = alimento + valor;
		
		else
			bebidas = bebidas + valor;			
		
		x++; //x = x + 1
	}	
	
	cout << "\nO valor gasto com alimentos foi R$ " << alimento;
	cout << "\nO valor gasto com bebidas foi R$ " << bebidas;
	cout << "\nO valor gasto com limpeza foi R$ " << limpeza; 
	cout << "\n\nO total gasto foi R$ " << alimento+bebidas+limpeza;
	cout << "\n\nA vista com 5% de desconto R$ " << (alimento+bebidas+limpeza)*0.95;
	cout << "\n\nParcelado 6 vezes de R$ " << (alimento+bebidas+limpeza)/6;
	
}
