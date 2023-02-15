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
	
	cout << "Seu IMC é: " << imc;
	
	if (imc < 22)
		cout << " você está magro(a)";
	else if (imc >= 22 && imc <= 26)
		cout << " você está no peso normal";
	else if (imc > 26 && imc <= 30)
		cout << " você está acima do peso";
	else
		cout << " você está obeso(a)";
}


