#include<iostream>
#include<locale.h>
using namespace std;

int x, soma, valor, n;

int main(){	
	setlocale(LC_ALL,"");

	soma = 0;
	x = 1;
	
	cout << "Digite quantos n�meros quer somar: ";
	cin >> n;
	
	while (x<=n){
		
		cout << "Informe o valor da nota: ";
		cin >> n;
			
		x++; //x = x + 1
	}	

	cout << "Total=" << soma << endl;
	cout << "Pre�o M�dio=" << soma/n;
}
