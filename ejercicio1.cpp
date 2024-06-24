#include<iostream>
#include<windows.h>


using namespace std;

int saldo=0;

void depositar(){
	saldo +=100;
	cout<<"Se han depostiado 100 unidades. Nuevo Saldo: "<<saldo<<endl;
	system("pause");
	system("CLS");
}

void retirar(){
	if(saldo >=100){
		saldo -=100;
		cout<<"Se han tetirado 100 unidades. Nuevo Saldo: "<<saldo<<endl;
	} else{
		cout<<"Saldo insuficiente.\n";
	}
	system("pause");
	system("CLS");
}

void mostrarSaldo(){
	cout<<"Saldo actual: "<<saldo<<endl;
	system("pause");
	system("CLS");
}

void menu(){
	int opcion;
	do {
		cout<<"\n--- Cajero Automático ---"<<endl;
		cout<<"1. Depositar 100"<<endl;
		cout<<"2. Retirar 100"<<endl;
  		cout<<"3. Mostrar Saldo"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Selecione una opcion: ";cin>>opcion;
		
		switch(opcion){
			case 1:
				depositar();
				break;
			case 2:
				retirar();
				break;
			case 3:
				mostrarSaldo();
				break;
			case 4:
				cout<<"Saliendo";
				for(int i=1;i<=3;i++){
					cout<<".";
					Sleep(1000);
				}
				cout<<endl;
				break;
			default:
				cout<<"Opción no válida. Intente de nuevo\n";				
		}
	}while(opcion!=4);
}

int main(){
	menu();
	return 0;
}



