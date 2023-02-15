#include<iostream>
#include<locale.h>
using namespace std;

float c, f;

int main(){	
	setlocale(LC_ALL,"");

	f=0;
	
	while (f<=100){
		c=(5.0/9.0)*(f-32);
		
		cout << f << "Farenheit=" << c << "Celsius" << endl;
		
		f++; //x = x + 1
	}	

}
