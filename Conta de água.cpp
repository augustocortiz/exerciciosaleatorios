#include<iostream>
#include<locale.h>
using namespace std;

float valor;
int tipo;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe a quantidade de litros ";
	cin >> valor;
	
	cout << "Qual o tipo de im�vel? [1 para residencial / 2 para comercial]: ";
	cin >> tipo;
	
	if (tipo == 1)
		cout << "O valor por litro � R$ 0,03 o valor da conta � R$ " << valor*0.03;
	else
		cout << "O valor por litro � R$ 0,05 o valor da conta � R$ " << valor*0.05;
	
}
