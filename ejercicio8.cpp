#include<iostream>
#include<cmath>
using namespace std;

void raices(int a, int b, int c){
	double disc,x1,x2;
	disc=pow(b,2)-(4*a*c);
	if(disc<0){
		cout<<"No exiten soluciones reales\n";
	}else if(disc==0){
		x1=-b/(2*a);
		cout<<"Unica solucion: "<<x1<<endl;
	} else if(disc>0){
		x1=(-b+sqrt(disc))/(2*a);
		x2=(-b-sqrt(disc))/(2*a);
		cout<<"Dos soluciones: "<<x1<<" y "<<x2<<endl;
	}
}

	
int main(){
	int a,b,c;
	cout<<"\t\t\tCalcular raices de una ecuacion cuadratica\n";
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	raices(a,b,c);
}