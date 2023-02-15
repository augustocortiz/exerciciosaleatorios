#include<iostream>
#include<locale.h>
using namespace std;

float produto, venda;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do produto R$ ";
	cin >> produto;
	
	if (produto < 20)
		venda = produto + (produto*0.45);
	else
		venda = produto + (produto*0.3);
		
	cout << "O valor da venda é R$ " << venda;
	
	
	
}
