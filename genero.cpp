#include<iostream>
#include<locale.h>
using namespace std;

float n;
int x, cont, cont2;
char genero;

int main(){	
	setlocale(LC_ALL,"");

	x = 1;
	cont=0;
	cont2=0;
	
	while (x<=5){
		
		cout << "Informe o genero (m ou f) ";
		cin >> genero;
		
		if(genero == 'm')
			cont ++;
		else
			cont2 ++;
				
		x++; //x = x + 1
	}	

	cout << "Total genero masculino " << cont << endl;
	cout << "Total genero feminino " << cont2 << endl;
	
	
}
