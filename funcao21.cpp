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
char msg[35] = "Curso: Segurança da Informação";
Mensagem (msg);
}

