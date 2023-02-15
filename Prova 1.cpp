#include<iostream>

using namespace std;
float x, a, b, total;

int main(){
	
	cout << "Valor de a ";
	cin >> a;
	cout << "Valor de b ";
	cin >> b;
	cout << "Valor de x ";
	cin >> x;
	
	
	if (a != 0 and b != 0)
		total = (a/b)*x*x-(b/a)*x-(a+b);
	else
		total = (a+b)*x*x-(b-a)*x+(a+b);
	
	cout << "O resultado e " << total;
	
}

