#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

float consumo, preco, precofinal, icms;
int tipo;

int main(){
	setlocale(LC_ALL,"");

	cout << "Informe o consumo de kwh ";
	cin >> consumo;
	
	if (consumo <= 100)
		preco = consumo*0.08;
	else if (consumo <= 200)
			preco = consumo*0.10;
		else if (consumo <= 500)
				preco = consumo*0.12;
			else
				preco = consumo*0.15;
	
	icms = preco*0.1;			
	precofinal = preco + icms;
	
	cout << "\nO valor da consumo é R$ " <<preco;
	cout << "\nO valor do ICMS é R$ " <<icms;
	cout << "\nO valor final é R$ " <<precofinal;
}

