#include<iostream>
#include<locale.h>
using namespace std;

float salario, aumento;
int setor;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe seu salário R$ ";
	cin >> salario;
	cout << "Informe seu setor (1 ou 2) ";
	cin >> setor;
		
	if(salario > 1000)
		if (setor == 1)
			aumento = salario*0.1;
		else
			aumento = salario*0.07;
	else
		if (setor == 1)
			aumento = salario*0.15;
		else
			aumento = salario*0.08;
	
	cout << "Seu novo salário será R$ " << salario+aumento;
}
