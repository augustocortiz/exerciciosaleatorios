#include<iostream>
#include<locale.h>
using namespace std;

float salario, inss, ir;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o sal�rio R$ ";
	cin >> salario;
	
	if (salario*0.11 <= 640.00)
		inss = salario*0.11;
	else
		inss = 640.00;
		
	if (salario < 1500)
		ir = salario*0.1;
	else
		ir = salario*0.15;
		
	cout << "Seu sal�rio l�quido � R$: " << salario-inss-ir;
	
}
