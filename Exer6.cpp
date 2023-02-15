#include<iostream>
#include<locale.h>
using namespace std;

int x, N, soma;

int main(){	
	setlocale(LC_ALL,"");
	
	cout <<"N=";
	cin >> N;
	
	x=1;
	soma=1;
	
	while (x<N){
			
		x = x+1;
		soma = soma+x;
				
	}	
	
	cout << soma;

	cout << "\nfim do programa";
}
