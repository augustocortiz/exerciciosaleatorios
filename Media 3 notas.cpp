#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

float nota1, nota2, nota3, media;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe a nota1: ";
	cin >> nota1;
	cout << "Informe a nota2: ";
	cin >> nota2;
	cout << "Informe a nota3: ";
	cin >> nota3;
	
	media = (nota1+nota2+nota3)/3;
	
	if (media<4)
		cout << "\nReprovado, nota " << media;
	else if (media >= 4 && media < 6)
		cout << "\nExame, nota " << media;
	else
		cout << "\nAprovado, nota " << media;
		
}
