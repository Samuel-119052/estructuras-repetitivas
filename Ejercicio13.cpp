#include<iostream>
using namespace std;
int main(){
	int num1,num2,M=0;
	cout<<Ingrese el primer numero para la multiplicacion<<endl;
	cin>>num1;
	cout<<Ingrese el segundo numero para la multiplicacion<<endl;
	cin>>num2;
	for(int i=1;i<=num2;i++){
		M=M+num1;
	}
	cout<<La multiplicacion de los dos numeros es: <<M<<endl;
	return 0;
}
