#include<iostream>
#include<locale.h>
using namespace std;

float va, vb, vc;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Digite o valor A: ";
	cin >> va;
	cout << "Digite o valor B: ";
	cin >> vb;
	cout << "Digite o valor C: ";
	cin >> vc;
	
	if (va>vb && va>vc)
		cout << "O maior valor � A, " << va;
	else if (vb>va && vb>vc)
		cout << "O maior valor � B, " << vb;
	else if (vc>va && vc>vb)
		cout << "O maior valor � C, " << vc;
	else if (va == vb && va == vc)
		cout << "Os tr�s n�meros s�o iguais: " << va, vb, vc;
	else if (vb == vc)
		cout << "Os valores de B e C s�o iguais: " << vb, vc;
	else if (va == vb)
		cout << "Os valores de A e B s�o iguais: " << va, vb;
	else if (va == vc)
		cout << "Os valores de A e C s�o iguais: " << va, vc;
		
}
