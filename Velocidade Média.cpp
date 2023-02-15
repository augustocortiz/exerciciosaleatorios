#include<iostream>
#include<locale.h>
using namespace std;

char a[8];
float distancia, tempo, media;

int main(){
	setlocale(LC_ALL,"");
	
	cout << "Informe a distância em quilometros entre as cidades: ";
	cin >> distancia;
	cout << "Informe o tempo gasto em horas: ";
	cin >> tempo;
	
	media = distancia/tempo;
	
	cout << "A velocidade média foi: " << media << "Km/H";
	
	/*cout << "Olá mundo!";
	gets(a);
	cout << a;
	//cin >> a;*/
	
	return 0;
}
