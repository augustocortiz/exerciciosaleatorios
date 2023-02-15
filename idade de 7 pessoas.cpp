#include<iostream>
#include<locale.h>
using namespace std;

float n;
int x, cont, cont2, cont3, idade;

int main(){	
	setlocale(LC_ALL,"");

	x = 1;
	cont=0;
	cont2=0;
	
	while (x<=7){
		
		cout << "Informe a idade";
		cin >> idade;
		
		if(idade < 18)
			cont ++;
		else if (idade <= 60)
			cont2 ++;
		else
			cont3 ++;
				
		x++; //x = x + 1
	}	

	cout << "\nTotal menores de 18 " << cont << endl;
	cout << "\nTotal entre 18 e 60 " << cont2 << endl;
	cout << "\nTotal maiores de 60 " << cont3 << endl;
	
}
