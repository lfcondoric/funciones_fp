#include<iostream>
#include<cmath>
using namespace std;

void calcularRaices(int a,int b, int c, int *x1, int *x2, int *dis);

int main(){
	int a,b,c,x1,x2,dis;
	cout<<"Ingrese a: ";cin>>a;
	cout<<"Ingrese b: ";cin>>b;
	cout<<"Ingrese c: ";cin>>c;
	calcularRaices(a, b, c, &x1, &x2, &dis);
	if(dis<0){
		cout<<"Raices complejas\n";
	} else{
		cout<<x1<<endl;
		cout<<x2;
	}
	return 0;
}

void calcularRaices(int a,int b, int c, int *x1, int *x2, int *dis){
	*dis=pow(b,2)-4*a*c;
	*x1=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	*x2=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
}