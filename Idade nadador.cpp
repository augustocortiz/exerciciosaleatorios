#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int idade;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe a idade de um nadador ";
	cin >> idade;
	
	if (idade >= 18)
		cout << "Adulto";
	else if (idade >= 14)
			cout << "Juvenil";
		else if (idade >= 9)
				cout << "Infantil";
			else
				cout << "Mirim";
}
