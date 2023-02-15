#include<iostream>
#include<locale.h>
using namespace std;
void Calculo(int x, int p)
{ 
	
	setlocale(LC_ALL,"");
	int k;
	k = x*p;
	cout << "k=" <<k;
	
}

//programa principal
int main(){
	int m;
	
	cout << "M=";
	cin>>m;
	
	Calculo(m, 2);
}
