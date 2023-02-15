#include<iostream>

using namespace std;

float valor, ipva;
int tipo;

int main(){

	cout << "Qual o tipo do veículo 1 para passeio 2 para utilitario 3 para onibus 4 para caminhao 5 para taxi: ";
	cin >> tipo;	
	cout << "Qual o valor R$ ";
	cin >> valor;	
	
	if (tipo == 1)
		ipva = valor*0.04;
	else if (tipo == 2)
		ipva = valor*0.03;
	else if (tipo == 3)
		ipva = valor*0.02;
	else if (tipo == 4)
		ipva = valor*0.01;
	else
		ipva = 0;
	
	if(tipo != 4){
		cout << "IPVA a vista R$ " << ipva-ipva*0.05;
		cout << "\nOu 5 parcelas de R$ " << ipva/5;
	}
	else
		cout << "O veículo é isento de IPVA";
	
}

