#include<iostream>
#include<locale.h>
using namespace std;

int setor, cor;
float desconto, preco;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe seu departamento ";
	cin >> setor;
	cout << "Informe sua cor\n1 para azul\n2 para branca\n3 para verde\n4 para preta";
	cin >> cor;
	cout << "Informe o valor inicial do produto R$ ";
	cin >> preco;
		
	if(setor == 1)
		if (cor == 1)
			desconto = preco*0.06;
		else if (cor == 2)
			desconto = preco*0.07;
		else if (cor == 3)
			desconto = preco*0.08;
		else
			desconto = preco*0.09;
	else if (setor == 2)
		if (cor == 1)
			desconto = preco*0.05;
		else if (cor == 2)
			desconto = preco*0.04;
		else if (cor == 3)
			desconto = preco*0.03;
		else
			desconto = preco*0.02;
	else
		if (cor == 1)
			desconto = preco*0.1;
		else if (cor == 2)
			desconto = preco*0.2;
		else if (cor == 3)
			desconto = preco*0.3;
		else
			desconto = preco*0.5;
	
	cout << "O valor da roupa será R$ " << preco-desconto;
}
