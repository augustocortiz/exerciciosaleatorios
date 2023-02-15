#include<iostream>
#include<locale.h>
using namespace std;

float n;
int x, cont;

int main(){	
	setlocale(LC_ALL,"");

	x = 1;
	cont=0;
	
	while (x<=5){
		
		cout << "Informe o valor da media: ";
		cin >> n;
		
		if(n>=6)
			cont ++;
				
		x++; //x = x + 1
	}	

	cout << "Total Aprovados = " << cont << endl;
	
}
