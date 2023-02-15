#include<iostream>
#include<locale.h>
using namespace std;

float altura;
int tipo;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe a altura ";
	cin >> altura;
	cout << "Informe se é homem ou mulher [1 para homem / 2 para mulher] ";
	cin >> tipo;
		
	if (tipo == 1)
		cout << "O peso ideal para homens da sua altura é " << 72.7*altura - 58;
	else
		cout << "O peso ideal para mulheres da sua altura é " << 62.1*altura - 44.7;
	
}
