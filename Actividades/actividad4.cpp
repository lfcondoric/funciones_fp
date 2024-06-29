#include<iostream>
#include<cmath>
using namespace std;

double discriminante(int a, int b, int c);

int main(){
	int a,b,c,d,x1,x2;
	cout<<"\t\t\tCalcular raices de una ecuacion cuadratica\n";
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	d=discriminante(a,b,c);
	if(d<0){
		cout<<"No exiten soluciones reales\n";
	}else{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		cout<<x1<<endl;
		cout<<x2<<endl;
	}
	return 0;
}

double discriminante(int a, int b, int c){
	double disc;
	disc=pow(b,2)-(4*a*c);
	return (disc);
}

