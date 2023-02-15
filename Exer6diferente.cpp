#include<iostream>
#include<locale.h>
using namespace std;

int x, N, soma;

int main(){	
	setlocale(LC_ALL,"");
	
	cout <<"N=";
	cin >> N;
	
	x=1;
	soma=0;
	
	while (x<=N){
		
		soma = soma+x;	
		x = x+1;
				
	}	
	
	cout << soma;

	cout << "\nfim do programa";
}
