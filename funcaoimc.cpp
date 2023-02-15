#include<iostream>
#include<locale.h>
using namespace std;

float imc(float peso, float altura)
{ 
	float imc;
	imc = peso/(altura*altura);
	return(imc);
	
}

void classificaImc(float imc){
	if(imc<22)
		cout << " magro";
	else if (imc >=22 and imc<27)
		cout << " normal";
	else
		cout << " gordo";
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
	classificaImc(A);
}
