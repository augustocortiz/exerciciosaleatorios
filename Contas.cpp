#include<iostream>
#include<locale.h>
using namespace std;

char a[8];
float salario, conta1, conta2;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe o valor do sal�rio R$ ";
	cin >> salario;
	cout << "Informe o valor da conta 1 R$ ";
	cin >> conta1;
	cout << "Informe o valor da conta 2 R$ ";
	cin >> conta2;
	
	conta1 = conta1 + (conta1*0.02);
	conta2 = conta2 + (conta2*0.05);
	
	salario = salario - (conta1+conta2);
	
	if (salario < 0){
		cout << "O valor das contas ultrapassa o sal�rio em R$ " << salario*-1;
	}else{
	
		cout << "\nO valor da conta 1 � R$ " << conta1;
		cout << "\nO valor da conta 2 � R$ " << conta2;	
		cout << "\n\nA soma das conta � R$ " << conta1+conta2;
		cout << "\n\nO sal�rio restante � R$ " << salario;
		
	}

}
