#include<iostream>
#include<locale.h>
using namespace std;

float valor;
int importado;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do produto: ";
	cin >> valor;
	
	cout << "O produto � importado? [1 para sim / 2 para nao]: ";
	cin >> importado;
	
	if (importado == 1)
		cout << "O valor final do produto � importado � R$ " << valor-(valor*0.10);
	else
		cout << "O valor final do produto � nacional � R$ " << valor-(valor*0.05);
	
}
