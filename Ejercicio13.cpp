#include<iostream>
using namespace std;
int main(){
	int num1,num2,M=0;
	cout<<"_________________"<<endl;
	cout<<"PROGRAMA INICIADO"<<endl;
	cout<<"*****************"<<endl;
	cout<<"Ingrese el primer numero para la multiplicacion"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero para la multiplicacion"<<endl;
	cin>>num2;
	for(int i=1;i<=num2;i++){
		M=M+num1;
	}
	cout<<"La multiplicacion de los dos numeros es: "<<M<<endl;
	cout<<"___________________"<<endl;
	cout<<"ORIGRAMA FINALIZADO"<<endl;
	cout<<"*******************"<<endl;
	return 0;
}
