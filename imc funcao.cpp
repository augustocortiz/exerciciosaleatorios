#include<iostream>
#include<locale.h>
using namespace std;

float imc(float altura, float peso)
{ 
	float imc;
	imc = peso/(altura*altura);
	return(imc);
	
}

//programa principal
int main(){
	
	setlocale(LC_ALL,"");
	float p, a, A;
	cout<<"peso = ";
	cin>>p;
	cout<<"altura = ";
	cin>>a;
	A = imc(p, a);
	cout<<"IMC= "<<A;
}
