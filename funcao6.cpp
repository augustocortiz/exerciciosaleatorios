#include<iostream>
#include<locale.h>
using namespace std;

int AreaRet(int lado1, int lado2)
{ 
	int area;
	setlocale(LC_ALL,"");
	area = lado1*lado2;
	return(area);
	
}

//programa principal
int main(){
	int x,y, A;
	cout<<"Lado1 = ";
	cin>>x;
	cout<<"Lado2 = ";
	cin>>y;
	A = AreaRet(x, y);
	cout<<"Area= "<<A;
}
