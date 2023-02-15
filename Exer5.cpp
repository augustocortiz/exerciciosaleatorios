#include<iostream>
#include<locale.h>
using namespace std;

int x, N;

int main(){	
	setlocale(LC_ALL,"");
	
	cout <<"Início=";
	cin >> x;
	cout <<"fim=";
	cin >> N;
	
	while (x<=N){
		cout << x << endl;
	
		x = x+1;
	}	

	cout << "\nfim do programa";
}
