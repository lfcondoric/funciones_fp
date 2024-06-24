#include<iostream>
#include<math.h>
using namespace std;

void hipotenusa(int a,int b){
	double h=sqrt(pow(a,2)+pow(b,2));
	cout<<"La hipotenusa es: "<<h<<endl;
}


int main(){
	int c1,c2;
	cout<<"Ingrese el cateto de un triangulo rectangulo: ";cin>>c1;
	cout<<"Ingrese el otro cateto de un triangulo rectangulo: ";cin>>c2;
	hipotenusa(c1,c2);
}