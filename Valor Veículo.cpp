#include<iostream>
#include<locale.h>
using namespace std;

char a[8];
float valor, valorfinal;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do ve�culo R$ ";
	cin >> valor;
	
	valorfinal = valor + (valor*0.45 + valor*0.28);
	
	cout << "O valor final do ve�culo � R$ " << valorfinal;
	
}
