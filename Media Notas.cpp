#include<iostream>
#include<math.h>
using namespace std;

float nota1, nota2, media;

int main(){
	setlocale(LC_ALL,"");
	cout << "Nota1 = ";
	cin >> nota1;
	cout << "Nota2 = ";
	cin >> nota2;
	
	media = (nota1+nota2)/2;
	
	if (media >= 6)
		cout << "Aprovado!";
	else
		cout << "Reprovado!";
	
}
