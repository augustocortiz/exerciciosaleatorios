#include<iostream>
#include<locale.h>
using namespace std;

float salario, emprestimo, valor;
int parcelas;
int tipo;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do sal�rio ";
	cin >> salario;
	cout << "Informe o valor do empr�stimo ";
	cin >> emprestimo;
	cout << "Informe a quantidade de parcelas ";
	cin >> parcelas;
	
	valor = emprestimo/parcelas;
	
	if (valor <= salario*0.3)
		cout << "O empr�stimo � permitido, o valor da parcela � R$ " << valor;
	else
		cout << "O empr�stimo n�o � permitido, pois o valor da parcela � R$ " << valor;
	
}
