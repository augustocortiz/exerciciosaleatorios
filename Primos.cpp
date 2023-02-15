#include<iostream>
#include<locale.h>
using namespace std;

int x, n;

int main(){	
	setlocale(LC_ALL,"");
	
	cout <<"N=";
	cin >> n;
	
	x=2;

	while(x <= n){

		if(n%1 == 0 and n%n == 0)
		cout << x <<endl;
		
		x=x+1;
	}

}
