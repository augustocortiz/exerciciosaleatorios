#include <iostream>
#include <locale.h>
using namespace std;

float desconto,preco;
int setor, cor;
	int main ()
	{
	
	cout <<"Informe seu departamento ";
	cin >> setor;
	cout <<"Informe sua cor\n1 para azul \n 2 para verde \n 3 para amarelo \n 4 para branco ";
	cin >> cor;
	cout << "Informe o valor do produto R$ ";
	cin >> preco;
	
		if (setor == 1)
		   if (cor ==1)
		   desconto = preco*0.30;
		if (setor == 2)   
		   if (cor ==2) 
		   desconto = preco*0.20;
		if (setor == 3)   
		   if (cor == 3) 
		   desconto = preco*0.10;
		if (setor == 4)   
		   if (cor == 4)     
		   desconto = preco*0.05;
		   
		if (preco > 300)
			cout << "Essa roupa permite desconto de 3 vezes, sendo cada parcela de R$ " << (preco-desconto)/3 << "\nOu a vista R$" << preco-desconto;
		else
			cout << "O valor da roupa é R$ " << preco-desconto;
		
			 	 	 	     	  
		   
					   		
			
}
