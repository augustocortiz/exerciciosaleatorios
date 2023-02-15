#include<iostream>
#include<locale.h>
using namespace std;

float salario, emprestimo, valor;
int parcelas;
int tipo;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do salário ";
	cin >> salario;
	cout << "Informe o valor do empréstimo ";
	cin >> emprestimo;
	cout << "Informe a quantidade de parcelas ";
	cin >> parcelas;
	
	valor = emprestimo/parcelas;
	
	if (valor <= salario*0.3)
		cout << "O empréstimo é permitido, o valor da parcela é R$ " << valor;
	else
		cout << "O empréstimo não é permitido, pois o valor da parcela é R$ " << valor;
	
}
