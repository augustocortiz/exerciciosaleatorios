#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

float metros, preco;
int tipo;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Qual a quantidade de m² do imóvel ";
	cin >> metros;
	cout << "Qual o tipo de imóvel? \n1 - Residencial \n2 - Comercial \n3 - Industrial\n";
	cin >> tipo;
	
	system("cls");
	
	if (tipo == 1)
		preco = 2 * metros;
	else if (tipo == 2)
			preco = 4 * metros;
		else
			preco = 5 * metros;
	
	cout << "O valor do imposto é R$ " << preco;
	
}
