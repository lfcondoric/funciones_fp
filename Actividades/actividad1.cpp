#include<iostream>
#include<cmath>

using namespace std;

double area(double a);

int main(){
	int r;
	cout<<"Ingrese el radio del circulo\n";cin>>r;
	cout<<"El area es: "<<area(r)<<endl;
	return 0;
}

double area(double a){
	double area;
	area=M_PI*pow(a,2);
	return(area);  
}
