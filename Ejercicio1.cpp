#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese el numero de multiplos de 7 que desea imprimir"<<endl;
	cin>>n;
	if(n>0){
		cout<<"Los primeros "<< n <<"  multiplos de 7 son: "<<endl;
		for(int i=1;i<=n;i++){
		cout<< i*7 <<endl;
		}
	}else{
		cout<<"Digite un numero que no sea igual a cero ni negativos"<<endl;
	}
	return 0;
}
