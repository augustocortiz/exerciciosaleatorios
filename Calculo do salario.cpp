#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

float salario, inss, irrf;
int tipo;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do salário R$ ";
	cin >> salario;
	
	if (salario*0.11 > 640)
		inss = 640;
	else
		inss = salario*0.11;
		
	if (salario <= 1903.98)
		irrf = 0;
		else if (salario <= 2826.65)
			irrf = salario*0.075;
				else if (salario <= 3751.05)
					irrf = salario*0.15;
						else
							irrf = salario*0.225;
		
	cout << "\nSeu salário bruto é R$ " << salario;
	cout << "\nSeu desconto de INSS é R$ " << inss;
	cout << "\nSeu desconto de IRRF é R$ " << irrf;
	cout << "\nSeu salário líquido é R$ " << salario-inss-irrf;

}
