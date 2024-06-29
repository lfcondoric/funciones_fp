#include<iostream>
#include<math.h>
using namespace std;

double hipotenusa(int a,int b);

int main(){
	double c1,c2;
	cout<<"Ingrese el cateto de un triangulo rectangulo: ";cin>>c1;
	cout<<"Ingrese el otro cateto de un triangulo rectangulo: ";cin>>c2;
	cout<<"La hipotenusa es: "<<hipotenusa(c1,c2)<<endl;
	return 0;
}

double hipotenusa(int a,int b){
	double h=sqrt(pow(a,2)+pow(b,2));
	return h;
}