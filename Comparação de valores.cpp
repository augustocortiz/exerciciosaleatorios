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
		cout << "O maior valor é A, " << va;
	else if (vb>va && vb>vc)
		cout << "O maior valor é B, " << vb;
	else if (vc>va && vc>vb)
		cout << "O maior valor é C, " << vc;
	else if (va == vb && va == vc)
		cout << "Os três números são iguais: " << va, vb, vc;
	else if (vb == vc)
		cout << "Os valores de B e C são iguais: " << vb, vc;
	else if (va == vb)
		cout << "Os valores de A e B são iguais: " << va, vb;
	else if (va == vc)
		cout << "Os valores de A e C são iguais: " << va, vc;
		
}
