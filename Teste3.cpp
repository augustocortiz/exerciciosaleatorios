#include<iostream>
#include<locale.h>

using namespace std;

void prova1(){
	
	float x, a, b, func;

	setlocale(LC_ALL,"");

	cout << "Informe o valor de a: ";
	cin >> a;
	cout << "Informe o valor de b: ";
	cin >> b;
	cout << "Informe o valor de x: ";
	cin >> x;
	
	
	if (a != 0 and b != 0)
		func = (a/b)*x*x-(b/a)*x-(a+b);
	else
		func = (a+b)*x*x-(b-a)*x+(a+b);
	
	cout << "O valor da função é " << func;
	
}

void prova2(){
	
	float valor, iptu, desconto, final;
	int tipo, pagamento;

	setlocale(LC_ALL,"");

	cout << "Informe o tipo do imóvel\n1 para residência\n2 para comércio\n3 para terreno\n4 para industrial: ";
	cin >> tipo;
	
	if(tipo != 4){
	
	cout << "Informe o valor do imóvel R$ ";
	cin >> valor;
	cout << "O pagamento é a vista ou dividido em 6 vezes?\n1 para a vista\n2 para dividido: ";
	cin >> pagamento;
	
	
	if (tipo == 1){
		iptu = valor*0.05;
			if (pagamento == 1)
			desconto = iptu*0.08;
			else
			desconto = 0;}
	else if (tipo == 2){
		iptu = valor*0.03;
			if (pagamento == 1)
			desconto = iptu*0.08;
			else
			desconto = 0;}
	else if (tipo == 3){
		iptu = valor*0.02;
			if (pagamento == 1)
			desconto = iptu*0.08;
			else
			desconto = 0;}
	else
		iptu = 0;
	
	final = iptu - desconto;		
	
	if(pagamento == 1)
		cout << "O valor do IPTU é R$ " << final;
	else
		cout << "O valor de cada parcela do IPTU será R$ " << final/6;
		
	}else
		cout << "O imóvel é isento de IPTU";
	
}

int main(){
	
	int tipo;
	
	setlocale(LC_ALL,"");
	
	cout << "Informe o a pergunta a ser testada: ";
	cin >> tipo;
	
	switch(tipo){
		case 1: prova1();
		break;
		case 2: prova2();
		break;		
		default: cout << "Opção inválida!";
	}
	
}

