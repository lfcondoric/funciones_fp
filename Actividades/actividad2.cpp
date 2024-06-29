#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void numeroAL(int a, int b);

int main(){
	int c,m;
	cout<<"Ingrese la cantidad de numero que desea generar: ";cin>>c;
	cout<<"Ingrese el maximo numero permitido: ";cin>>m;
	numeroAL(c,m);
	return 0;	
}

void numeroAL(int a, int b){
	srand(time(0));
	for(int i=1;i<=a;i++){
		int numero=+rand()%(b+1-0);
		cout<<numero<<", ";
	}
}
