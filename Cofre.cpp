#include<iostream>
#include<locale.h>
#define COFRE 123456
using namespace std;

int senha;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe a senha do cofre: ";
	cin >> senha;
	
	if (senha == COFRE)
		cout << "Acesso permitido";
	else
		cout << "Acesso negado";
	
}
