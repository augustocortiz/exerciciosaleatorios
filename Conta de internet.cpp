#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

float qtd, preco;
int tipo;

int main(){
	setlocale(LC_ALL,"");
	cout << "Informe seu plano: \n1 - Ouro \n2 - Prata \n3 - Bronze\n";
	cin >> tipo;
	cout << "Informe a quantidade de megas consumido ";
	cin >> qtd;
	
	if (tipo == 1)
		preco = 50 + qtd*0.3;
	else if (tipo == 2)
			preco = 30 + qtd*0.5;
		else
			preco = 20 + qtd*0.8;
		
	cout << "O valor da sua conta é R$ " << preco;
}
