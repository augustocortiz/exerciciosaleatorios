#include<iostream>
#include<locale.h>
using namespace std;

int x;

int main(){	
	setlocale(LC_ALL,"");
	x = 0;

	while ( x<=100){
		cout << x << endl;
	
		x = x+2;
	}	

	cout << "\nfim do programa";
}
