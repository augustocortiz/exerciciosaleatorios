#include<iostream>
#include<locale.h>
using namespace std;

int x, N;

int main(){	
	setlocale(LC_ALL,"");
	
	cout <<"N=";
	cin >> N;
	
	x = 1;

	while (x<=N){
		cout << x << endl;
	
		x = x+1;
	}	

	cout << "\nfim do programa";
}
