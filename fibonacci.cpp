#include<iostream>
#include<locale.h>
#include<string.h>
using namespace std;

int x, n, termo1, termo2, termo3;
float grao=1;

int main(){	
	setlocale(LC_ALL,"");

	x = 1;
	
	cout << "Informe o termo";
	cin >> n;
	
	while (x<=n){
		
		termo1=termo2;
		termo3 = termo1 + termo2;				
		
		x++; //x = x + 1
	}	
	
	cout << "Valor do termo" << termo3;
	
}
