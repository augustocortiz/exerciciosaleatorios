#include<iostream>
#include<locale.h>
using namespace std;

int x;

int main(){	
	setlocale(LC_ALL,"");
	x = 1;

	while ( x<=10){
		cout << x << endl;
	
		x = x+1;
	}	

	cout << "\nfim do programa";
}
