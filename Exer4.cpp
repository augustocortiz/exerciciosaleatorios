#include<iostream>
#include<locale.h>
using namespace std;

int x;

int main(){	
	setlocale(LC_ALL,"");
	x = 10;

	while ( x<=100){
		cout << x << endl;
	
		x = x+5;
	}	

	cout << "\nfim do programa";
}
