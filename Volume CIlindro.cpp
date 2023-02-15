#include<iostream>
#include<locale.h>
#define PI 3.1415
using namespace std;

float v, r, h;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Raio: ";
	cin >> r;
	
	cout << "Altura: ";
	cin >> h;
	
	v = PI*r*r*h;
	
	cout << "Volume do cilindro =" << v;
}
