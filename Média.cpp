#include<iostream>
#include<locale.h>
using namespace std;

float n1, n2, media;

int main(){
	setlocale(LC_ALL,"");
	
	
	cout << "Nota1: ";
	cin >> n1;
	cout << "Nota2: ";
	cin >> n2;
	
	media = (n1+n2)/2;
	
	if (media >= 6)
		cout << "Aprovado, média: " << media;
	else
		cout << "Reprovado, média: " << media;
}
