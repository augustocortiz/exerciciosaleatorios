#include<iostream>
#include<locale.h>
using namespace std;

float peso, altura, imc;

int main(){
	setlocale(LC_ALL,"");
	cout << "Informe seu peso: ";
	cin >> peso;
	cout << "Informe sua altura: ";
	cin >> altura;
	
	imc = peso / (altura*altura);
	
	cout << "Seu IMC �: " << imc;
	
	if (imc < 22)
		cout << " voc� est� magro(a)";
	else if (imc >= 22 && imc <= 26)
		cout << " voc� est� no peso normal";
	else if (imc > 26 && imc <= 30)
		cout << " voc� est� acima do peso";
	else
		cout << " voc� est� obeso(a)";
}


