#include<iostream>
#include<locale.h>
#define TAXA 30
#define LIMITE 200
using namespace std;
 
float minutos, cobranca;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe a quantidade de minutos ";
	cin >> minutos;
	
	if(minutos <= LIMITE)
		cobranca = 0;
		else if (minutos <= 400)
			cobranca = (minutos - LIMITE) * 0.05;
				else
					cobranca = (minutos - LIMITE) * 0.03;
	
	cout << "O valor dos minutos excedidos é R$ " << cobranca;
	cout << "\nO valor final da conta é R$ " << TAXA + cobranca;
	
}
