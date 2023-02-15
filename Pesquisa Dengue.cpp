#include<iostream>
#include<locale.h>
#include<string.h>
using namespace std;

int x, idade, velho, novo, contn=150, contv=0;
float homem, mulher, n;
char genero;

int main(){	
	setlocale(LC_ALL,"");

	x = 1;
	
	cout << "Informe quantas pessoas pegaram dengue: ";
	cin >> n;
	
	while (x<=n){
		
		cout << "Genero M ou F: ";
		cin >> genero;
		tolower(genero);
		cout << "Informe a idade: ";
		cin >> idade;
		
		cout << "O genero é" << genero;
		
		if (idade < contn)
			contn = idade;
		
		if (idade > contv)
			contv = idade;
		
		 
		
		if(genero == 'm'){
			homem++;
		}
		else{
			mulher++;
		}
		
		x++; //x = x + 1
	}	
	
	cout << "\nTotal de Homens " << homem;
	cout << "\nTotal de Mulheres " << mulher;
	cout << "\nPorcentagem de Homens: " << (homem/n)*100 << "%";
	cout << "\nPorcentagem de Mulheres: " << (mulher/n)*100 << "%";
	cout << "\nIdade da pessoa mais nova: " << contn;
	cout << "\nIdade da pessoa mais velha: " << contv;
	
}
