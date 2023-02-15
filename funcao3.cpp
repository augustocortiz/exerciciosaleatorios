#include<iostream>
#include<locale.h>
using namespace std;
void Mensagem(char texto[30])
{
	setlocale(LC_ALL,"");
	cout<<texto;
}

//programa principal
int main(){
	char msg1[40]= "Curso:Seguranca da Informação";
	char msg2[30]= "FATEC-Araraquara";
	Mensagem (msg1);
	cout<<endl;
	Mensagem (msg2);
}
