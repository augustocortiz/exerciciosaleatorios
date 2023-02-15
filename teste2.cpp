#include<iostream>
#include<locale.h>
#include<string.h>
using namespace std;

int x, ano;
float grao=1, paulo=1.5, jose=1.1;

int main(){	
	setlocale(LC_ALL,"");

	ano = 0;
	
	while (jose<paulo){
		
		paulo = paulo+0.02;
		jose = jose+0.03;				
		
		ano++; //x = x + 1
		
		cout << "\n Ano = 1" << ano << " Paulo ="<<paulo<<" Jose =" <<jose;
	}	
	
	cout << "\nValor total de anos " << ano;
	
}
