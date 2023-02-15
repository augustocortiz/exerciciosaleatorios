#include<iostream>
#include<locale.h>
using namespace std;

int x, soma, valor;

int main(){	
	setlocale(LC_ALL,"");

	soma = 0;
	x = 1;
	
	while (x<=5){
		cout << "Digite um valor: ";
		
		cin >> valor;
	
		soma = soma + valor;
	
		x++; //x = x + 1
	}	

	cout << "Total=" << soma << endl;
}
