#include<iostream>
#include<locale.h>
using namespace std;

float va, vb;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Digite o valor A: ";
	cin >> va;
	cout << "Digite o valor B: ";
	cin >> vb;
	
	if (va>vb)
		cout << "O maior valor é A, " << va;
	else if (vb>vb)
		cout << "O maior valor é B, " << vb;
	else
		cout << "Os valores de A e B são iguais: " << va, vb;
		
}
