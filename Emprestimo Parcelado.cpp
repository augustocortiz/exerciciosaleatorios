#include<iostream>
#include<locale.h>
using namespace std;

float valor, total, valorp;
int codigo, parcelas;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Valor do empr�stimo R$ ";
	cin >> valor;
	cout << "C�digo da categoria (1 a 4): ";
	cin >> codigo;
	
	switch(codigo){
		case 1: total = 0.02*valor+valor;
			break;
		case 2: total = 0.03*valor+valor;
			break;
		case 3: total = 0.04*valor+valor;
			break;
		case 4: total = 0.05*valor+valor;
			break;
		default: cout << "Categoria inv�lida!" <<endl;
	}
	
	if(codigo>0 and codigo<5){
		
		cout << "Informe o n�mero de parcelas(6, 12, 18, 24): ";
		cin >> parcelas;
		
		switch(parcelas){
			case 6: valorp = total/parcelas;
				break;
			case 12: valorp = total/parcelas;
				break;
			case 18: valorp = total/parcelas;
				break;
			case 24: valorp = total/parcelas;
				break;
			default: cout << "Quantidade de parcelas inv�lida!" <<endl;	
		}	
			
		if(parcelas == 6 or parcelas == 12 or parcelas == 18 or parcelas == 24){
			cout << "\nValor total do empr�stimo R$ " << total; 
			cout << "\nValor de cada uma das "<< parcelas << " parcela � R$ " << valorp << endl << endl; 
		}		
	}
	
	
		
	
	/*system("PAUSE");
	system("cls");*/
	
}
