#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

float salario, inss, irrf;
int tipo;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do sal�rio bruto R$ ";
	cin >> salario;
	
	if (salario <= 1200)
		inss = salario*0.07;
		else if (salario <=1700)
			inss = salario*0.09;
				else
					inss = salario*0.11;
					
	cout << "\nSeu desconto do INSS � R$ "<< inss;					
	cout << "\nSeu sal�rio l�quido � R$ " << salario-inss;

}
