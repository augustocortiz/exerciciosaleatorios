#include<iostream>
#include<locale.h>
using namespace std;

char a[8];
int valor, cem, cinq, vin, dez, cinco, dois, um;

int main(){
	setlocale(LC_ALL,"");
	cout << "Informe um valor ";
	cin >> valor;
	
	if (valor <0 || valor >1000){
		cout << "Valor inv�lido";
	}else{
	
    	cem = valor / 100;
    	valor = valor - (cem * 100 );
 
   	 	cinq = valor / 50;
    	valor = valor - (cinq * 50);
 
    	vin = valor / 20;
    	valor = valor - (vin * 20);
 
    	dez = valor / 10;
    	valor = valor - (dez * 10);
 
    	cinco = valor / 5;
    	valor = valor - (cinco * 5);
 
    	dois = valor / 2;
    	valor = valor - (dois * 2 );
    
    	um = valor;
    
		cout << "\nSer�o necess�rias " << cem << " notas de 100";
		cout << "\nSer�o necess�rias " << cinq << " notas de 50";
		cout << "\nSer�o necess�rias " << vin << " notas de 20";
		cout << "\nSer�o necess�rias " << dez << " notas de 10";
		cout << "\nSer�o necess�rias " << cinco << " notas de 5";
		cout << "\nSer�o necess�rias " << dois << " notas de 2";
		cout << "\nSer�o necess�rias " << um << " notas de 1";
				
		
	}	
}
