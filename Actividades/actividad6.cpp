#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int computadora();

int main(){
	
	int a,c,us=0,pc=0;
	
	cout<<"1. Piedra\n";
	cout<<"2. Papel\n";
	cout<<"3. Tijera\n";
	while((us<3)&&(pc<3)){
		cin>>a;
		c=computadora();
		cout<<"La computadora eligio: "<<c<<endl;
	if(a==c){
		cout<<"Es un empate\n";
	}else if((a==1&&c==3)||(a==2&&c==1)||(a==3&&c==2)){
		cout<<"Usted ha ganado \n";
		us++;
	}else if((a==3&&c==1)||(a==1&&c==2)||(a==2&&c==3)){
		cout<<"Usted ha perdido \n";
		pc++;
	}}
	if(us==3){
		cout<<"Usted ha ganado 3 veces\n";
	}else if(pc==3){
		cout<<"La computadora ha ganado 3 veces\n";
	}
	return 0;
	}

int computadora(){
	srand(time(0));
	int c=1+rand()%3;
	return (c);
}
