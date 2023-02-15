#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

float lado1, lado2, lado3;
int tipo;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do lado 1 ";
	cin >> lado1;
	cout << "Informe o valor do lado 2 ";
	cin >> lado2;
	cout << "Informe o valor do lado 3 ";
	cin >> lado3;
	
	if ( lado1 == lado2 and lado2 == lado3)
			cout << "\nO triângulo é equilátero";
		else if ( lado1 == lado2 or lado2 == lado3 or lado3 == lado1)
				cout << "\nO triângulo é isóscele";
			else
				cout << "\nO triângulo é escaleno";
	

}
