#include<iostream>
using namespace std;
int main(){
	int num, fact=1;
	cout<<"PROGRAMA INCIADO"<<endl;
	cout<<"****************"<<endl;
	cout<<"Ingrese un numero positivo"<<endl;
	cin>>num;
	if(num>=1){
		for(int i=1;i<=num;i++){
			fact=fact*i;
		}
	    cout<<"El factorial de su numero ingresado es: "<<fact<<endl;
	}else{
		cout<<"Error: Numero invalido"<<endl;
	}
	cout<<"___________________"<<endl;
	cout<<"PROGRAMA FINALIZADO"<<endl;
	return 0;
}
