#include<iostream>
#include<locale.h>
using namespace std;

float Maior(float a, float b, float c)
{ 
	if(a>b and a>c)
		return(a);
	else if (b>c)
		return(b);
	else
		return(c);
	
}

float Menor(float a, float b, float c)
{ 
	if(a<b and a<c)
		return(a);
	else if (b<c)
		return(b);
	else
		return(c);
	
}

float Media(float a, float b, float c)
{ 
	float media;
	media = (a+b+c)/3;
	return(media);
	
}

int main(){
	
	setlocale(LC_ALL,"");
	float a, b, c, maior, menor, media;
	cout<<"A = ";
	cin>>a;
	cout<<"B = ";
	cin>>b;
	cout<<"C = ";
	cin>>c;
	
	maior = Maior(a, b, c);
	menor = Menor(a, b, c);
	media = Media(a, b, c);
	
	cout<<"Maior= "<<maior<<endl;
	cout<<"Menor= "<<menor<<endl;
	cout<<"Media= "<<media;
}
