#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

float nota1, nota2, nota3, media;
int faltas, raiz;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe a nota1: ";
	cin >> nota1;
	cout << "Informe a nota2: ";
	cin >> nota2;
	cout << "Informe a nota3: ";
	cin >> nota3;
	cout << "Informa a quantidade de faltas: ";
	cin >> faltas;
	
	media = (nota1+nota2+nota3)/3;
	
	if (media<6 || faltas > 20)
		cout << "\nReprovado, nota " << media << " faltas " << faltas;
	else // if (media >= 6 && faltas <= 20)
		cout << "\nAprovado, nota " << media << " faltas " << faltas;
		
}
